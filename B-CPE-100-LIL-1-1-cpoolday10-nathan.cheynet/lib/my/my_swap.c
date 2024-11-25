/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** swap the content of two pointer
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
