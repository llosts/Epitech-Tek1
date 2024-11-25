/*
** EPITECH PROJECT, 2024
** convert base
** File description:
** convert string nbr from base string
*/

#include <stddef.h>
#include <stdlib.h>

#include "include/my.h"

static int my_get_index_in_base(char c, char *base)
{
    int i = 0;

    while (base[i] != '\0') {
        if (base[i] == c)
            return i;
        i += 1;
    }
    return -1;
}

static int base_to_decimal(char const *nbr, char *base_from)
{
    int base_len = my_strlen(base_from);
    int decimal_value = 0;
    int power = 1;
    int index_in_base = 0;

    for (int i = my_strlen(nbr) - 1; i >= 0; i--) {
        index_in_base = my_get_index_in_base(nbr[i], base_from);
        if (index_in_base == -1)
            return -1;
        decimal_value += index_in_base * power;
        power *= base_len;
    }
    return decimal_value;
}

static char *decimal_to_base(int nbr, char *base_to)
{
    int base_len = my_strlen(base_to);
    char buffer[33];
    int index = 0;

    if (nbr == 0) {
        buffer[0] = base_to[0];
        buffer[1] = '\0';
        return my_strdup(buffer);
    }
    while (nbr > 0) {
        buffer[index] = base_to[nbr % base_len];
        nbr /= base_len;
        index += 1;
    }
    buffer[index] = '\0';
    my_revstr(buffer);
    return my_strdup(buffer);
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int decimal_value = 0;
    char *nbr_cpy = NULL;
    char *base_from_cpy = NULL;
    char *base_to_cpy = NULL;

    if (nbr == NULL || base_from == NULL || base_to == NULL)
        return NULL;
    nbr_cpy = my_strdup(nbr);
    base_from_cpy = my_strdup(base_from);
    base_to_cpy = my_strdup(base_to);
    if (nbr_cpy == NULL || base_from_cpy == NULL || base_to_cpy == NULL)
        return NULL;
    decimal_value = base_to_decimal(nbr_cpy, base_from_cpy);
    if (decimal_value == -1)
        return NULL;
    return decimal_to_base(decimal_value, base_to_cpy);
}
