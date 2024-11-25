/*
** EPITECH PROJECT, 2024
** my_print_digits
** File description:
** print digits
*/

#include <unistd.h>

int my_print_digits(void)
{
    char c = '0';

    for (int i = '0'; i <= '9'; i++) {
        write(1, &c, 1);
        c += 1;
    }
    return 0;
}
