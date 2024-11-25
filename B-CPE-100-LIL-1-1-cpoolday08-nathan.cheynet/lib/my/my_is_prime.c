/*
** EPITECH PROJECT, 2024
** my_is_prime
** File description:
** check if a number is prime
*/

int my_is_prime(int nb)
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
