/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

char *my_revstr(const char * const str)
{
    char *rev = NULL;
    int len = 0;

    if (!str)
        return (my_putstr_err("my_revstr() : str was NULL\n"), NULL);
    len = my_strlen(str);
    rev = smalloc(len + 1);
    if (!rev)
        return (my_putstr_err("my_revstr() : rev was NULL\n"), NULL);
    --len;
    for (int i = 0; len >= 0; ++i, --len)
        rev[i] = str[len];
    return (rev);
}