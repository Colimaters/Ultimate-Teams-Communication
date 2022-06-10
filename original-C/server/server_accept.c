#include "../include/server.h"

void remove_client(server_t *s)
{
    client_t *prev = NULL;

    for (client_t *tmp = s->clients.head; tmp; tmp = tmp->next) {
        prev = tmp->prev;
        if (!tmp->is_gone)
            continue;
        client_del(&s->clients, tmp->socket);
        if (!prev && s->clients.head)
            tmp = s->clients.head;
        else if (!prev && !s->clients.head)
            return;
        else
            tmp = prev;
    }
}

void read_request(server_t *s, fd_set *rfds)
{
    char *request;

    for (client_t *tmp = s->clients.head; tmp; tmp = tmp->next) {
        if (!FD_ISSET(tmp->socket, rfds))
            continue;
        request = gnl(tmp->socket, 1);
        if (!request) {
            tmp->is_gone = true;
            continue;
        }
        manage_request(tmp, request);
    }
    remove_client(s);
    client_list(&s->clients);
}

void accept_client(server_t *s)
{
    int csocket;
    struct sockaddr_in addr;
    unsigned int len = sizeof(addr);

    if ((csocket = accept(s->socket, (struct sockaddr *) &addr, &len)) == -1) {
        perror("accept");
        return;
    }
    printf("New client %d\n", csocket);
    client_add(&s->clients, client_new(csocket));
}

int server_loop(server_t *s)
{
    fd_set rfds;

    while (true) {
        FD_ZERO(&rfds);
        FD_SET(s->socket, &rfds);
        for (client_t *tmp = s->clients.head; tmp; tmp = tmp->next)
            FD_SET(tmp->socket, &rfds);
        if (select(FD_SETSIZE, &rfds, NULL, NULL, NULL) < 0) {
            perror("select");
            return (ERROR);
        }
        if (FD_ISSET(s->socket, &rfds))
            accept_client(s);
        read_request(s, &rfds);
    }
    return (SUCCESS);
}