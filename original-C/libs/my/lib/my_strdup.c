/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

char *my_strdup(const char * const str)
{
    char *dest = NULL;

    if (!str) {
        my_putstr_err("my_strdup() : str was NULL\n");
        return (NULL);
    }
    dest = smalloc(my_strlen(str) + 1);
    if (!dest) {
        my_putstr_err("my_strdup() : dest was NULL\n");
        return (NULL);
    }
    for (unsigned long i = 0; str[i]; ++i)
        dest[i] = str[i];
    return (dest);
}