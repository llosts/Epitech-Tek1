/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** allocate a string and return it
*/

#include <stddef.h>
#include <stdlib.h>

static int my_strlen(char const *str)
{
    int lenght = 0;

    while (str[lenght] != '\0') {
        lenght += 1;
    }
    return lenght;
}

char *my_strdup(char const *str)
{
    int i = 0;
    int lenght = my_strlen(str);
    char *copy_str = malloc(sizeof(char) * lenght);

    if (str == NULL || copy_str == NULL)
        return NULL;
    while (i < lenght) {
        copy_str[i] = str[i];
        i += 1;
    }
    copy_str[i] = '\0';
    return copy_str;
}
