/*
** EPITECH PROJECT, 2024
** test_my_calculs
** File description:
** unit test for the functions in my_calculs.c
*/

#include <criterion/criterion.h>

#include "my_opp.h"

Test(my_add, add)
{
    cr_assert_eq(my_add(1, 2), 3);
    cr_assert_eq(my_add(-1, -2), -3);
    cr_assert_eq(my_add(100, 200), 300);
}

Test(my_sub, subtract)
{
    cr_assert_eq(my_sub(5, 3), 2);
    cr_assert_eq(my_sub(-5, -3), -2);
    cr_assert_eq(my_sub(0, 0), 0);
}

Test(my_mul, multiply)
{
    cr_assert_eq(my_mul(3, 4), 12);
    cr_assert_eq(my_mul(0, 5), 0);
    cr_assert_eq(my_mul(5, -2), -10);
}

Test(my_div, divide)
{
    cr_assert_eq(my_div(6, 3), 2);
    cr_assert_eq(my_div(10, 2), 5);
    cr_assert_eq(my_div(5, 0), 0);
}

Test(my_mod, modulo)
{
    cr_assert_eq(my_mod(10, 3), 1);
    cr_assert_eq(my_mod(10, 5), 0);
    cr_assert_eq(my_mod(10, 0), 0);
}
