/*
** EPITECH PROJECT, 2024
** main
** File description:
** computes an operation
*/

#include "my_opp.h"

int main(int argc, char **argv)
{
    if (argc != 4)
        return 84;
    if (do_op(argv[1], argv[2], argv[3]) != 0)
        return 84;
    return 0;
}