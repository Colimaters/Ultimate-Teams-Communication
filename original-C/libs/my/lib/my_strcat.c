/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

char *my_strcat(char *stro, char *strt, short flag)
{
    char *res = NULL;
    int i = -1;

    if (!stro || !strt)
        return (my_putstr_err("my_strcat() : stro/strt was NULL\n"), NULL);
    res = smalloc(my_strlen(stro) + my_strlen(strt) + 1);
    if (!res)
        return (my_putstr_err("my_strcat() : res was NULL\n"), NULL);
    for (int t = 0; stro[t]; ++t)
        res[++i] = stro[t];
    for (int t = 0; strt[t]; ++t)
        res[++i] = strt[t];
    flag == 1 ? free(stro) : (void)0;
    flag == 2 ? free(strt) : (void)0;
    flag == 3 ? free_str(2, stro, strt) : (void)0;
    return (res);
}
