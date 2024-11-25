/*
** EPITECH PROJECT, 2024
** my_advanced_sort_word_array
** File description:
** sorts the words depending on the return value of the function passed
*/

#include <stddef.h>

static void my_sort_helper(char **tab, int i, int j,
    int (*cmp)(char const *, char const *))
{
    for (int j = i + 1; tab[j] != NULL; j++) {
        if (cmp(tab[i], tab[j]) > 0)
            my_swap_pointers(&tab[i], &tab[j]);
    }
}

int my_advanced_sort_word_array(char **tab,
    int (*cmp)(char const *, char const *))
{
    for (int i = 0; tab[i] != NULL; i++)
        my_sort_helper(tab, i, j, cmp);
    return 0;
}
