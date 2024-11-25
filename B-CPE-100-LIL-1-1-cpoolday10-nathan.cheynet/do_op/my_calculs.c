/*
** EPITECH PROJECT, 2024
** my_calculs
** File description:
** function to do simple calculation
*/

int my_add(int a, int b)
{
    return (a + b);
}

int my_sub(int a, int b)
{
    return (a - b);
}

int my_div(int a, int b)
{
    if (b == 0)
        return 0;
    return (a / b);
}

int my_mul(int a, int b)
{
    return (a * b);
}

int my_mod(int a, int b)
{
    if (b == 0)
        return 0;
    return (a % b);
}
