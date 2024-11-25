/*
** EPITECH PROJECT, 2024
** my_params_to_array
** File description:
** stores the program’s parameters into an array of structures
*/

#include <stddef.h>
#include <stdlib.h>

#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *arg = malloc(sizeof(struct info_param) * (ac + 1));

    if (arg == NULL)
        return NULL;
    for (int i = 0; i < ac; i++) {
        arg[i].length = my_strlen(av[i]);
        arg[i].str = av[i];
        arg[i].copy = my_strdup(av[i]);
        if (arg[i].copy == NULL)
            return NULL;
        arg[i].word_array = my_str_to_word_array(arg[i].copy);
        if (arg[i].word_array == NULL)
            return NULL;
    }
    arg[ac].str = NULL;
    return arg;
}
