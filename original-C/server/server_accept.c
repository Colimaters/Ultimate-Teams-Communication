#include "../include/server.h"

void read_request(server_t *s, fd_set *rfds)
{
    // char cmd[MAX_BODY_LENGTH * 2 + 1];
    char *cmd;

    for (client_t *tmp = s->clients.head; tmp; tmp = tmp->next) {

        //bzero(cmd, MAX_BODY_LENGTH * 2);
        if (FD_ISSET(tmp->socket, rfds)) {
            cmd = gnl(tmp->socket, 1);
            if (!cmd)
                continue;
            // if (read(tmp->socket, cmd, MAX_BODY_LENGTH * 2) <= 0)
                // continue;
            my_printf("Client %d send : %s\n", tmp->socket, cmd);
            dprintf(tmp->socket, "Copy that\n");
        }
    }
}

void accept_client(server_t *s)
{
    int csocket;
    struct sockaddr_in addr;
    unsigned int len = sizeof(addr);

    if ((csocket = accept(s->socket, (struct sockaddr *) &addr, &len)) != -1) {
    	printf("New client %d\n", csocket);
    }
    client_add(&s->clients, client_new(csocket));
}

int accept_loop(server_t *s)
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