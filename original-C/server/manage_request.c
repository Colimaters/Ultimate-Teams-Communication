#include "../include/server.h"

void manage_request(client_t *c, char *request)
{
    my_printf("Client %d send : %s\n", c->socket, request);
    dprintf(c->socket, "Copy that\n");
    free(request);
}