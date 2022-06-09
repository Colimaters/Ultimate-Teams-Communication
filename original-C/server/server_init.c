#include "../include/server.h"

int init_member(server_t *s)
{
    s->clients.head = NULL;
    s->clients.tail = NULL;
    return (OK);
}

int server_init(server_t *s, int port)
{
    struct sockaddr_in adresse;

    init_member(s);
    if ((s->socket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
    	return (ERROR);
    }
    adresse.sin_family = AF_INET;
    adresse.sin_addr.s_addr = INADDR_ANY;
    adresse.sin_port = htons(port);
    if (bind(s->socket, (struct sockaddr *) &adresse, sizeof(adresse)) != 0) {
        perror("bind");
        return (ERROR);
    }
    if (listen(s->socket, MAX_CLIENT) != 0) {
        perror("listen");
        return (ERROR);
    }
    return (OK);
}