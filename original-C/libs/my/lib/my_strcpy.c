/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

char *my_strcpy(char *to_replace, const char * const src)
{
    if (!src)
        return (my_putstr_err("my_strcpy() : src was NULL\n"), NULL);
    if (to_replace)
        free(to_replace);
    to_replace = my_strdup(src);
    return (to_replace);
}