/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

static short count(unsigned int nb)
{
    short c = 0;

    while (nb > 0) {
        nb /= 10;
        ++c;
    }
    return (c);
}

char *int_to_str(int nb)
{
    int c = count((unsigned int)nb);
    char *str = smalloc(c + 1);
    int sign = nb;

    if (!str)
        return (my_putstr_err("int_to_str() : str was NULL\n"), NULL);
    if (sign < 0)
        nb = -nb;
    for (; nb > 0; nb /= 10)
        str[--c] = nb % 10 + '0';
    return (str);
}
