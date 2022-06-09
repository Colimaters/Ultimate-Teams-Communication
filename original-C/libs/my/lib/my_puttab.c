/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

int my_puttab(const char * const * const tab)
{
    if (!tab)
        return (my_putstr_err("my_puttab() : tab was NULL\n"));
    for (unsigned long i = 0; tab[i]; ++i) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (SUCCESS);
}

void p_tab(va_list ap)
{
    my_puttab((const char * const * const)va_arg(ap, char **));
}