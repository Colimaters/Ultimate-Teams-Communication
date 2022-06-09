/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

int my_putnbr_base(unsigned int nbr, const char * const base)
{
    if (!base)
        return (my_putstr_err("my_putnbr_base() : base was NULL\n"));
    if (nbr == 0)
        return (SUCCESS);
    else
        my_putnbr_base(nbr / my_strlen(base), base);
    my_putchar(base[nbr % my_strlen(base)]);
    return (SUCCESS);
}
