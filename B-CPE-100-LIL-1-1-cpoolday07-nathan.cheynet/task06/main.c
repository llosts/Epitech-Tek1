/*
** EPITECH PROJECT, 2024
** main
** File description:
** main function for the task05
*/

#include "../include/my.h"

int main(int argc, char const **argv)
{
    int index = 0;
    char **words = (char **)argv;

    while (index < argc) {
        my_sort_str(argc, words, index);
        index += 1;
    }
    for (int i = 0; i < argc; i++) {
        my_putstr(words[i]);
        my_putchar('\n');
    }
    return 0;
}
