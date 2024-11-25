/*
** EPITECH PROJECT, 2024
** my_str_isnum
** File description:
** return 1 if the str is only composed of digits
*/

#include <stddef.h>

static int my_char_isnum(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        if (my_char_isnum(str[i]) == 0)
            return 0;
        i += 1;
    }
    return 1;
}
