/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** find a string in a string
*/

#include <stddef.h>

static int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count += 1;
    return count;
}

static int my_find_needle(char *str1, char const *str2, int n)
{
    int i = 0;

    while (i < n) {
        if (str1[i] != str2[i] || str1[i] == '\0')
            return 0;
        i += 1;
    }
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    int n = my_strlen(to_find);

    if (str == NULL)
        return NULL;
    if (to_find == NULL)
        return str;
    while (*str != '\0') {
        if (my_find_needle(str, to_find, n) != 0) {
            return str;
        }
        str += 1;
    }
    return NULL;
}
