/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

char *tab_to_str(const char * const * const tab)
{
    char *res = NULL;
    int len = 0;
    int k = -1;

    if (!tab)
        return (my_putstr_err("tab_to_str() : tab was NULL\n"), NULL);
    for (int i = 0; tab[i]; ++i)
        len += my_strlen(tab[i]);
    res = smalloc(len + 1);
    if (!res)
        return (my_putstr_err("tab_to_str() : res was NULL\n"), NULL);
    for (int i = 0; tab[i]; ++i) {
        for (int t = 0; tab[i][t]; ++t)
            res[++k] = tab[i][t];
    }
    return (res);
}