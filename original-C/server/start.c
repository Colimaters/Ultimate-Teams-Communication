#include "../include/server.h"

int start(const char * const port)
{
    server_t s;

    if (!str_isnum(port))
        return (ERROR);
    
    if (server_init(&s, atoi(port)) == ERROR)
        return (ERROR);
    return (server_loop(&s));
}