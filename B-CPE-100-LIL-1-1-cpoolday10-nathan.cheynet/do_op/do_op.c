/*
** EPITECH PROJECT, 2024
** do_op
** File description:
** computes an operation
*/

#include "my.h"
#include "my_opp.h"

static int my_get_operator_index(char const *op)
{
    int i = 0;

    while (OPERATORS_FUNCS[i].op != NULL) {
        if (my_strcmp(OPERATORS_FUNCS[i].op, op) == 0)
            return i;
        i += 1;
    }
    my_usage();
    return 84;
}

static int my_is_special_case(char const *op, int nbr)
{
    if (nbr == 0) {
        if (my_strcmp(op, "/") == 0) {
            my_putstr("Stop: division by zero\n");
            return 1;
        }
        if (my_strcmp(op, "%") == 0) {
            my_putstr("Stop: modulo by zero\n");
            return 1;
        }
    }
    return 0;
}

int do_op(char const *value1, char const *op, char const *value2)
{
    int nbr1 = my_getnbr(value1);
    int nbr2 = my_getnbr(value2);
    int op_index = my_get_operator_index(op);
    int result = 0;

    if (my_is_special_case(op, nbr2) == 1 || op_index == 84)
        return 84;
    result = OPERATORS_FUNCS[op_index].func(nbr1, nbr2);
    my_put_nbr(result);
    my_putchar('\n');
    return 0;
}
