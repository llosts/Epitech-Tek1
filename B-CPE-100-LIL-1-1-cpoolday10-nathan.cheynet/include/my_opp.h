/*
** EPITECH PROJECT, 2024
** my_opp.h
** File description:
** header for operation
*/

#include <stddef.h>

#ifndef MY_OPP_H_
    #define MY_OPP_H_

typedef struct operator_s {
    char *op;
    int (*func)(int, int);
} operator_t;

int my_add(int a, int b);
int my_sub(int a, int b);
int my_div(int a, int b);
int my_mul(int a, int b);
int my_mod(int a, int b);
int my_usage(void);

static const operator_t OPERATORS_FUNCS[] = {
    {"+", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
    {NULL, NULL}
};

int do_op(char const *value1, char const *op, char const *value2);
int my_advanced_do_op(char const *value1, char const *op, char const *value2);

#endif
