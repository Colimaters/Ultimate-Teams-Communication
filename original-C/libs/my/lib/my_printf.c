/*
** EPITECH PROJECT, 2020
** Lib
** File description:
** functions for my lib
*/

#include "../include/listing_function.h"

static int count_flags(const char * const str)
{
    int count = 0;

    for (int i = 0; str[i]; ++i) {
        if (str[i] == '%')
            ++count;
    }
    return (count);
}

static int redirect_flag(const char * const str, int i, va_list ap)
{
    void (*fptr[])(va_list) = {p_str, p_strnp, p_char, p_tab,
        p_nbr, p_nbr, p_prct, p_oct, p_dec, p_hexp,
        p_hexg, p_bin, p_ptr};
    char *flag = "sSctid%ouxXbp";

    for (int t = 0, len = my_strlen(flag); t < len; ++t) {
        if (flag[t] == str[i + 1]) {
            (*fptr[t])(ap);
            return (i + 2);
        }
    }
    my_putchar('%');
    my_putchar(str[++i]);
    return (++i);
}

int my_printf(const char * const str, ...)
{
    int i = 0;
    va_list ap;

    if (!str)
        return (my_putstr_err("my_printf() : str was NULL\n"));
    if (count_flags(str) == 0)
        return (my_putstr(str));
    va_start(ap, str);
    while (str[i]) {
        if (str[i] == '%')
            i = redirect_flag(str, i, ap);
        else
            my_putchar(str[i++]);
    }
    va_end(ap);
    return (SUCCESS);
}
