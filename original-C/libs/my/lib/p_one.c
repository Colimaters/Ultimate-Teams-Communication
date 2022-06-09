/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** call back function (vestige -> je laisse donc inchangé)
*/

#include "../include/listing_function.h"

void p_oct(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "01234567");
}

void p_dec(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789");
}

void p_hexp(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

void p_hexg(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}

void p_bin(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "01");
}
