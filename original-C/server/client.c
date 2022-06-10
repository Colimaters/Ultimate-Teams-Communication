#include "../include/server.h"

client_t *client_new(int socket)
{
    client_t *c = malloc(sizeof(client_t));

    c->socket = socket;
    c->is_gone = false;
    c->next = NULL;
    c->prev = NULL;
    return (c);
}

void client_add(ctrl_client_t *ctrl, client_t *c)
{
    if (!ctrl->tail) {
        ctrl->head = c;
        ctrl->tail = c;
    } else  {
        ctrl->tail->next = c;
        c->prev = ctrl->tail;
        ctrl->tail = c;
    }
}

void client_del(ctrl_client_t *ctrl, int socket)
{
    client_t *c = ctrl->head;
    // client_t *prev = NULL, *next = NULL;

    for (; c && c->socket != socket; c = c->next);
    if (!c)
        return;
    if (ctrl->head == ctrl->tail) {
        free(c);
        ctrl->head = NULL;
        ctrl->tail = NULL;
        return;
    }

    if (c == ctrl->head) {
        // next = c->next;
        c->next->prev = NULL;
        ctrl->head = c->next;
    } else if (c == ctrl->tail) {
        // prev = c->prev;
        c->prev->next = NULL;
        ctrl->tail = c->prev;
    } else {
        c->prev->next = c->next;
        c->next->prev = c->prev;
    }
    free(c);
}

void client_list(ctrl_client_t *ctrl)
{
    for (client_t *tmp = ctrl->head; tmp; tmp = tmp->next)
        my_printf("Client with socket fd : %d\n", tmp->socket);
}