#include "../include/server.h"

void help(void)
{
    my_putstr("USAGE\n\t./myteams_server port\n");
    my_putstr("DESCRIPTION\n\tport is the port number on which the server "
    "socket listens.\n");
    exit(ERROR);
}