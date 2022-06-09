/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

char *smalloc(size_t size)
{
    char *str = malloc(size);

    if (!str) {
        my_putstr_err("smalloc() : malloc failed\n");
        return (NULL);
    }
    for (size_t i = 0; i < size; ++i)
        str[i] = '\0';
    return (str);
}

char **tmalloc(size_t size)
{
    char **tab = malloc(sizeof(char *) * size);

    if (!tab) {
        my_putstr_err("tmalloc() : malloc failed\n");
        return (NULL);
    }
    for (size_t i = 0; i < size; ++i)
        tab[i] = NULL;
    return (tab);
}

int *imalloc(size_t size)
{
    int *nb = malloc(sizeof(int) * size);

    if (!nb) {
        my_putstr_err("imalloc() : malloc failed\n");
        return (NULL);
    }
    for (size_t i = 0; i < size; ++i)
        nb[i] = 0;
    return (nb);
}
