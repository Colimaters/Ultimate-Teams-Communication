/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

int my_putstr_err(const char * const str)
{
    if (!str)
        return (my_putstr_err("my_putstr_err() : str was NULL\n"));
    for (const char *c = str; *c; ++c)
        my_putchar_err(*c);
    return (FAILURE);
}