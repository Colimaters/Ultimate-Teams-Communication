/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

int my_putstr(const char * const str)
{
    if (!str)
        return (my_putstr_err("my_putstr() : str was NULL\n"));
    for (unsigned long i = 0; str[i]; ++i)
        my_putchar(str[i]);
    return (SUCCESS);
}

void p_str(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}
