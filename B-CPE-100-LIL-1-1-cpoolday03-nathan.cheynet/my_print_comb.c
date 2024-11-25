/*
** EPITECH PROJECT, 2024
** my_print_comb
** File description:
** print a specific combinaison
*/

#include <unistd.h>

static void my_helper(int a, int b)
{
    for (int c = 0; c <= 9; c++) {
        if (a < b && b < c) {
            my_putchar(a + 48);
            my_putchar(b + 48);
            my_putchar(c + 48);
        }
        if (a < 7 && a < b && b < c)
            write(1, ", ", 2);
    }
}

int my_print_comb(void)
{
    for (int a = 0; a <= 7; a++) {
        for (int b = 0; b <= 8; b++) {
            my_helper(a, b);
        }
    }
    return 0;
}
