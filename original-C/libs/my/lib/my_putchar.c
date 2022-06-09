/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

void my_putchar(char c)
{
    long ret = write(1, &c, 1);

    if (ret == -1)
        my_putstr_err("my_putchar() : write failed\n");
}

void p_char(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void p_prct(va_list ap)
{
    ap = ap;
    my_putchar('%');
}
