/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** Made by Adrien PASINA & MOREL Darius (vestige -> je laisse donc inchangé)
*/

#include "../include/listing_function.h"

void my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        my_put_nbr(nb / 10);
    }
    my_putchar((char)(nb % 10 + '0'));
}

void p_nbr(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}
