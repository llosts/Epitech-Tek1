/*
** EPITECH PROJECT, 2024
** my_print_alpha.c
** File description:
** print the alphabet
*/

#include <unistd.h>

int my_print_alpha(void)
{
    char c = 'a';

    for (int i = 'a'; i <= 'z'; i++) {
        write(1, &c, 1);
        c += 1;
    }
    return 0;
}
