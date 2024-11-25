/*
** EPITECH PROJECT, 2024
** my_strcapitalize
** File description:
** auto capitalize char in string
*/

#include <stddef.h>

static char *my_strlowercase(char *str)
{
    int i = 0;

    if (str == NULL)
        return NULL;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i += 1;
    }
    return str;
}

static int my_char_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

static int my_word_isboundary(char c)
{
    if (c == ' ' || c == '-' || c == '+')
        return 1;
    if (c == '\n' || c == '\t')
        return 1;
    return 0;
}

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str == NULL)
        return NULL;
    my_strlowercase(str);
    if (my_char_islower(str[0]) == 1)
        str[0] -= 32;
    while (str[i] != '\0') {
        if (my_word_isboundary(str[i - 1]) == 1 &&
            my_char_islower(str[i]) == 1)
            str[i] -= 32;
        i += 1;
    }
    return str;
}
