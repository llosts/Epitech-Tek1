/*
** EPITECH PROJECT, 2024
** my_show_param_array
** File description:
** displays the content of an array
*/

#include <stddef.h>

#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
    int index = 0;

    if (par == NULL)
        return 0;
    while (par[index].str != NULL) {
        my_putstr(par[index].str);
        my_putchar('\n');
        my_put_nbr(par[index].length);
        my_putchar('\n');
        my_show_word_array(par[index].word_array);
        my_putchar('\n');
        index += 1;
    }
    return 0;
}
