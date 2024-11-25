/*
** EPITECH PROJECT, 2024
** my_compute_power_it.c
** File description:
** compute the power using iterative
*/

int my_compute_power_it(int nb, int p)
{
    long int result = 1;
    int max = 2147483647;
    int min = -2147483648;

    if (p < 0 || (nb == 0 && p > 0))
        return 0;
    if (p == 0)
        return 1;
    if (p == 1)
        return nb;
    for (int i = 0; i < p; i++) {
        result *= nb;
        if (result > max || result < min)
            return 0;
    }
    return (int)result;
}
