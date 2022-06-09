/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2018
** File description:
** parse_str_pos (vestige -> je laisse donc inchangé)
*/

#include "../include/listing_function.h"

char *get_elem_str(const char * const s, char sep, int pos)
{
    char *dest = smalloc(my_strlen(s) + 1);
    unsigned long i = 0;
    unsigned long t = 0;

    if (!dest)
        return (my_putstr_err("get_elem_str() : dest was NULL"), NULL);
    for (unsigned long c = 0; s[i] && c < pos - 1; ++i) {
        if (s[i] == sep)
            ++c;
    }
    if (!s[i]) {
        free(dest);
        return (NULL);
    }
    for (; s[i] && s[i] != sep; ++i, ++t)
        dest[t] = s[i];
    return (dest);
}