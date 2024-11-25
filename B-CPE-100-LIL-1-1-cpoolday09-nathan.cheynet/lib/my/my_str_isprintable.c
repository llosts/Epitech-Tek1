/*
** EPITECH PROJECT, 2024
** my_str_isprintable
** File description:
** return 1 if the str is only composed of printable char
*/

#include <stddef.h>

static int my_char_isprintable(char c)
{
    if (c >= ' ' && c <= '~')
        return 1;
    return 0;
}

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        if (my_char_isprintable(str[i]) == 0)
            return 0;
        i += 1;
    }
    return 1;
}
