/*
** EPITECH PROJECT, 2024
** my_find_prime_sup.c
** File description:
** find the first prime number after a given number
*/

static int my_is_prime(int nb)
{
    if (nb == 2 || nb == 3)
        return 1;
    if (nb % 2 == 0 || nb < 2)
        return 0;
    for (int i = 3; i * i <= nb; i += 2) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    int max = 2147483647;

    while (nb < max) {
        if (my_is_prime(nb) != 0)
            return nb;
        nb += 1;
    }
    return 0;
}
