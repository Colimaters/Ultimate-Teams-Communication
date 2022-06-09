/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

int str_to_int(const char * const str)
{
    int res = 0;
    int i = 0;
    int dec = 1;
    char *tmp = NULL;

    if (!str)
        return (my_putstr_err("str_to_int() : str was NULL\n"), 0);
    tmp = my_revstr(str);
    while (tmp[i]) {
        res = (tmp[i] - 48) * dec + res;
        dec *= 10;
        ++i;
    }
    free(tmp);
    return (res);
}

