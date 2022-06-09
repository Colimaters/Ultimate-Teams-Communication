/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

void my_putchar_err(char c)
{
    long ret = write(2, &c, 1);

    if (ret == -1)
        my_putstr_err("my_putchar_err() : write failed\n");
}