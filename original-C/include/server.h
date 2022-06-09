#ifndef SERVER_H_
#define SERVER_H_

#include "global.h"

#include "../libs/myteams/logging_server.h"
#include "../libs/my/include/listing_function.h"

#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h> 
#include <strings.h>

#define MAX_CLIENT 10
#define MAX_NAME_LENGTH 32
#define MAX_DESCRIPTION_LENGTH 255
#define MAX_BODY_LENGTH 512


typedef struct client_s {
    int socket;
    struct client_s *next;
    struct client_s *prev;
}client_t;

typedef struct ctrl_client_s {
    client_t *head;
    client_t *tail;
}ctrl_client_t;


typedef struct server_s {
    int socket;
    ctrl_client_t clients;
}server_t;

void help(void);
int start(const char * const port);

int server_init(server_t *s, int port);
int accept_loop(server_t *s);

client_t *client_new(int socket);
void client_add(ctrl_client_t *ctrl, client_t *c);
void client_del(ctrl_client_t *ctrl, int socket);
void client_list(ctrl_client_t *ctrl);

#endif /* SERVER_H_ */