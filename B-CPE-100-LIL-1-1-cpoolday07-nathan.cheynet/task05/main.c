/*
** EPITECH PROJECT, 2024
** main
** File description:
** main function for the task05
*/

#include "../include/my.h"

int main(int argc, char const **argv)
{
    int index = argc - 1;

    while (index >= 0) {
        my_putstr(argv[index]);
        my_putchar('\n');
        index -= 1;
    }
    return 0;
}
