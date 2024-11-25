/*
** EPITECH PROJECT, 2024
** concate params
** File description:
** concate multiple string and return all of them in one str
*/

#include <stddef.h>
#include <stdlib.h>

#include "include/my.h"

char *concat_params(int argc, char **argv)
{
    char *str = NULL;
    int index = 0;
    int len = 0;

    for (int i = 0; i < argc; i++)
        len += my_strlen(argv[i]) + 1;
    str = malloc(sizeof(char) * len + 1);
    while (index < argc) {
        str = my_strcat(str, argv[index]);
        str = my_strcat(str, "\n");
        index += 1;
    }
    str[len + 1] = '\0';
    return str;
}
