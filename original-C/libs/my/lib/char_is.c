/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

bool char_isnum(char c)
{
    return (c >= '0' && c <= '9');
}

bool char_isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

bool char_islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

bool char_isalpha(char c)
{
    return (char_islower(c) || char_isupper(c));
}

bool char_isalphanum(char c)
{
    return (char_isnum(c) || char_isalpha(c));
}