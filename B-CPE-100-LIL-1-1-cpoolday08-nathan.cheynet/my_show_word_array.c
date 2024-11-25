/*
** EPITECH PROJECT, 2024
** my_show_word_array
** File description:
** displays the content of an array of words
*/

#include <stddef.h>

#include "include/my.h"

int my_show_word_array(char *const *tab)
{
    int index = 0;

    if (tab[0] == NULL)
        return 0;
    while (tab[index] != NULL) {
        my_putstr(tab[index]);
        my_putchar('\n');
        index += 1;
    }
    return 0;
}
