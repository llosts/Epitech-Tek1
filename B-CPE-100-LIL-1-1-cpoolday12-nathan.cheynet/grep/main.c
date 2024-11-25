/*
** EPITECH PROJECT, 2024
** main
** File description:
** main function for the program grep
*/

#include <unistd.h>

#include "my_grep.h"

int main(int argc, char const *argv[])
{
    if (argc < 2)
        return 84;
    if (argc == 2)
        return my_grep_stdin(argv[1]);
    for (int i = 2; i < argc; i++) {
        if (my_grep(argv[i], argv[1]) != 0)
            return 84;
    }
    return 0;
}
