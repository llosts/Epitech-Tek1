/*
** EPITECH PROJECT, 2024
** my_str_isalpha
** File description:
** return 1 if the str is only composed of letter
*/

#include <stddef.h>

static int my_char_isalpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        if (my_char_isalpha(str[i]) == 0)
            return 0;
        i += 1;
    }
    return 1;
}
