/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

char *gnl(int fd, short flag)
{
    char *line = smalloc(2);
    char *tmp = smalloc(2);
    int ret = 0;
    int c = 0;

    do {
        ret = read(fd, tmp, 1);
        if (ret <= 0)
            return (NULL);
        tmp[ret] = '\0';
        line = my_strcat(line, tmp, 1);
        ++c;
    } while (tmp[0] != '\n' && ret > 0);
    free(tmp);
    (flag) ? (line[c - 1] = '\0') : (0);
    if (!line[0] && ret == 0) {
        free(line);
        return (NULL);
    }
    return (line);
}