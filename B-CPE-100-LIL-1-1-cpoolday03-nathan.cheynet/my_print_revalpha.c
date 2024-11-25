/*
** EPITECH PROJECT, 2024
** my_print_revalpha
** File description:
** print the reverse alphabet
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    char c = 'z';

    for (int i = 'z'; i >= 'a'; i--) {
        write(1, &c, 1);
        c -= 1;
    }
    return 0;
}
