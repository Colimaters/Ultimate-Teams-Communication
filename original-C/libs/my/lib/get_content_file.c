/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** function for my lib
*/

#include "../include/listing_function.h"

char *get_content_file(const char * const file)
{
    struct stat sts;
    int fd = open(file, O_RDONLY);
    int ret = 0;
    char *buffer = NULL;

    if (!file)
        return (my_putstr_err("get_content_file() : file was NULL\n"), NULL);
    if (stat(file, &sts) != 0)
        return (my_putstr_err("get_content_file() : stat failed\n"), NULL);
    buffer = smalloc(sts.st_size);
    if (!buffer) {
        my_putstr_err("get_content_file() : buffer was NULL\n");
        return (NULL);
    }
    ret = read(fd, buffer, sts.st_size);
    if (ret == -1)
        return (my_putstr_err("get_content_file() : read failed\n"), NULL);
    return (buffer);
}