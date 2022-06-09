/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

size_t my_strlen(const char * const str)
{
    size_t i = 0;

    if (!str)
        return (my_putstr_err("my_strlen() : str was NULL\n"), 0);
    while (str[i])
        ++i;
    return (i);
}
