/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

static int conversion_adress(unsigned long nbr, const char * const base)
{
    if (nbr == 0)
        return (SUCCESS);
    else
        my_putnbr_base(nbr / my_strlen(base), base);
    my_putchar(base[nbr % my_strlen(base)]);
    return (SUCCESS);
}

static int my_put_adress(unsigned long nbr, const char * const base)
{
    my_putstr("0x");
    conversion_adress(nbr, base);
    return (SUCCESS);
}

void p_ptr(va_list ap)
{
    my_put_adress(va_arg(ap, unsigned long), "0123456789abcdef");
}
