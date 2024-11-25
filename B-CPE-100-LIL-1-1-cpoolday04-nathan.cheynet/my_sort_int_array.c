/*
** EPITECH PROJECT, 2024
** my_sort_int_array.c
** File description:
** simple int sorting algorithm
*/

static void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

static void my_swap_helper(int *a, int *b)
{
    if (*a < *b)
        my_swap(a, b);
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < size - 1; j++)
            my_swap_helper(&array[i], &array[j]);
    }
}
