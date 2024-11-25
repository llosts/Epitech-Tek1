/*
** EPITECH PROJECT, 2024
** my_compute_factorial
** File description:
** compute factorial using recursive
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    return nb * my_compute_factorial_rec(nb - 1);
}
