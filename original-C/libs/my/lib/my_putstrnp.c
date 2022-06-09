/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

int my_putstrnp(const char * const str)
{
    if (!str)
        return (my_putstr_err("my_putstrnp() : str was NULL\n"));
    for (unsigned long i = 0; str[i]; ++i) {
        if (str[i] <= 32 || str[i] >= 127) {
            my_putchar('\\');
            my_putnbr_base(str[i], "01234567");
        } else
            my_putchar(str[i]);
    }
    return (SUCCESS);
}

void p_strnp(va_list ap)
{
    my_putstrnp(va_arg(ap, char *));
}
