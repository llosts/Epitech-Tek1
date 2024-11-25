/*
** EPITECH PROJECT, 2024
** my_strupcase
** File description:
** change all lowercase letter to uppercase
*/

#include <stddef.h>

char *my_strupcase(char *str)
{
    int i = 0;

    if (str == NULL)
        return NULL;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i += 1;
    }
    return str;
}
