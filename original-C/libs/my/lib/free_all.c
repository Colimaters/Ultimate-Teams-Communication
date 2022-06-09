/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** function(s) for my lib
*/

#include "../include/listing_function.h"

void free_str(unsigned int c, ...)
{
    va_list ap;

    va_start(ap, c);
    for (unsigned short i = 0; i < c; ++i)
        free(va_arg(ap, char *));
    va_end(ap);
}

void free_tab(unsigned int c, ...)
{
    char **tab = NULL;
    va_list ap;

    va_start(ap, c);
    for (unsigned short i = 0; i < c; ++i) {
        tab = va_arg(ap, char **);
        for (unsigned long t = 0; tab[t]; ++t)
            free(tab[t]);
        free(tab);
    }
    va_end(ap);
}