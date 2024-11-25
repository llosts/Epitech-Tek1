/*
** EPITECH PROJECT, 2024
** my_sort_word_array
** File description:
** sort word in an array by ascii order
*/

#include <stddef.h>

#include "my.h"

static void my_swap_pointers(char **ptr1, char **ptr2)
{
    int *temp = *ptr1;

    *ptr1 = *ptr2;
    *ptr2 = temp;
}

static void my_sort_helper(char **tab, int i, int j)
{
    for (int j = i + 1; tab[j] != NULL; j++) {
        if (my_strcmp(tab[i], tab[j]) > 0)
            my_swap_pointers(&tab[i], &tab[j]);
    }
}

int my_sort_word_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        my_sort_helper(tab, i, j);
    return 0;
}
