/*
** EPITECH PROJECT, 2024
** my_compute_power_it
** File description:
** compute the power of nb using iterative
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    for (int i = 2; i <= nb; i++) {
        result *= i;
    }
    return result;
}
