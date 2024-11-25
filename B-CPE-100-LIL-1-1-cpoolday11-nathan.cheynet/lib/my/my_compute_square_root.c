/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** compute the square root of a number
*/

int my_compute_square_root(int nb)
{
    int result = 0;

    if (nb < 0)
        return 0;
    while (result * result < nb)
        result += 1;
    if (result * result == nb)
        return result;
    return 0;
}
