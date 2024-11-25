/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** reverse a string
*/

#include <stddef.h>

char *my_revstr(char *str)
{
    int start = 0;
    int end = 0;
    char temp;

    if (str == NULL)
        return NULL;
    while (str[end] != '\0')
        end += 1;
    if (end <= 1)
        return str;
    end -= 1;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start += 1;
        end -= 1;
    }
    return str;
}
