/*
** EPITECH PROJECT, 2024
** my_strlowcase
** File description:
** change all uppercase letter to lowercase
*/

#include <stddef.h>

char *my_strlowcase(char *str)
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
