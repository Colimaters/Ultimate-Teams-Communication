/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

bool str_isalpha(const char * const str)
{
    if (!str)
        return (my_putstr_err("str_isalpha() : str was NULL\n"), false);
    for (int i = 0; str[i]; ++i) {
        if (!char_isalpha(str[i]))
            return (false);
    }
    return (true);
}

bool str_isnum(const char * const str)
{
    if (!str)
        return (my_putstr_err("str_isnum() : str was NULL\n"), false);
    for (int i = 0; str[i]; ++i) {
        if (!char_isnum(str[i]))
            return (false);
    }
    return (true);
}

bool str_isalphanum(const char * const str)
{
    if (!str)
        return (my_putstr_err("str_isalphanum() : str was NULL\n"), false);
    for (int i = 0; str[i]; ++i) {
        if (!char_isalphanum(str[i]))
            return (false);
    }
    return (true);
}