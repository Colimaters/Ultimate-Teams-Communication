/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

static size_t count_line(const char * const str, char sep)
{
    size_t res = 1;

    for (int i = 0; i < my_strlen(str); ++i) {
        if (str[i] == sep)
            ++res;
    }
    return (res);
}

static size_t next_separator(const char * const str, char sep, int i)
{
    size_t res = 0;

    while (str[i] && str[i] != sep) {
        ++res;
        ++i;
    }
    return (res);
}

char **stwa(const char * const str, char sep)
{
    char **res = NULL;
    size_t y = 0, x = 0;

    if (!str)
        return (my_putstr_err("stwa() : str was NULL\n"), NULL);
    res = tmalloc(count_line(str, sep) + 1);
    if (!res)
        return (my_putstr_err("stwa() : res was NULL\n"), NULL);
    for (int i = 0; str[i]; ++i) {
        res[y] = smalloc(next_separator(str, sep, i) + 1);
        while (str[i] && str[i] != sep) {
            res[y][x] = str[i];
            ++x;
            ++i;
        }
        ++y;
        x = 0;
        if (!str[i])
            break;
    }
    return (res);
}