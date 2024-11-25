/*
** EPITECH PROJECT, 2024
** my_find_prime_sup.c
** File description:
** find the first prime number after a given number
*/

#include "my.h"

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
