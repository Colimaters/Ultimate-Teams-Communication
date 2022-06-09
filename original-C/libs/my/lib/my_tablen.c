/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

size_t my_tablen(const char * const * const tab)
{
    size_t i = 0;

    if (!tab)
        return (my_putstr_err("my_tablen() : tab was NULL\n"), 0);
    while (tab[i])
        ++i;
    return (i);
}
