/*
** EPITECH PROJECT, 2024
** my_str_isupper
** File description:
** return 1 if the str is only composed of uppercase letter
*/

#include <stddef.h>

static int my_char_isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int my_str_isupper(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        if (my_char_isupper(str[i]) == 0)
            return 0;
        i += 1;
    }
    return 1;
}
