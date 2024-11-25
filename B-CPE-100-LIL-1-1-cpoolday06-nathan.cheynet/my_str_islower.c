/*
** EPITECH PROJECT, 2024
** my_str_islower
** File description:
** return 1 if the str is only composed of lowercase letter
*/

#include <stddef.h>

static int my_char_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

int my_str_islower(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        if (my_char_islower(str[i]) == 0)
            return 0;
        i += 1;
    }
    return 1;
}
