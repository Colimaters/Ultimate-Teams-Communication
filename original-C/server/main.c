#include "../include/server.h"

int main(int ac, char **av)
{
    if (ac != 2)
        help();
    return start(av[1]);
}
