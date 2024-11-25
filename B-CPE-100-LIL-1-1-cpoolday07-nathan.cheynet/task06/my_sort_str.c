/*
** EPITECH PROJECT, 2024
** my_sort_words
** File description:
** sort word
*/

#include <stddef.h>

#include "../include/my.h"

void my_sort_str(int argc, char **words, int index)
{
    int i = index + 1;
    char *temp = NULL;

    while (i < argc) {
        if (my_strcmp(words[index], words[i]) > 0) {
            temp = words[i];
            words[i] = words[index];
            words[index] = temp;
        }
        i += 1;
    }
}
