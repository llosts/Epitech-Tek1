/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** print a number
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_put_nbr(-21474);
        my_put_nbr(83648);
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    return 0;
}
