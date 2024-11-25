/*
** EPITECH PROJECT, 2024
** main
** File description:
** main function for the task04
*/

#include "../include/my.h"

int main(int argc, char const **argv)
{
    int index = 0;

    while (index < argc) {
        my_putstr(argv[index]);
        my_putchar('\n');
        index += 1;
    }
    return 0;
}
