/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

bool str_compare(const char * const stro, const char * const strt)
{
    if (!stro && !strt)
        return (true);
    if (!stro || !strt || my_strlen(stro) != my_strlen(strt))
        return (false);
    for (int i = 0; stro[i] && strt[i]; ++i) {
        if (stro[i] != strt[i])
            return (false);
    }
    return (true);
}