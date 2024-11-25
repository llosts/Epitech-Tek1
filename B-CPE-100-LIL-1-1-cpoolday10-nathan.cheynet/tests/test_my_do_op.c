/*
** EPITECH PROJECT, 2024
** test_my_do_op
** File description:
** unit tests for the program test_my_do_op
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "my_opp.h"
#include "my.h"

Test(do_op, valid_mod)
{
    cr_redirect_stdout();
    do_op("10", "%", "3");
    cr_assert_stdout_eq_str("1\n");
}

Test(do_op, valid_div)
{
    cr_redirect_stdout();
    do_op("8", "/", "2");
    cr_assert_stdout_eq_str("4\n");
}

Test(do_op, valid_mul)
{
    cr_redirect_stdout();
    do_op("6", "*", "2");
    cr_assert_stdout_eq_str("12\n");
}

Test(do_op, valid_sub)
{
    cr_redirect_stdout();
    do_op("5", "-", "2");
    cr_assert_stdout_eq_str("3\n");
}

Test(do_op, valid_add)
{
    cr_redirect_stdout();
    do_op("3", "+", "4");
    cr_assert_stdout_eq_str("7\n");
}

Test(do_op, invalid_operator)
{
    cr_assert_eq(do_op("3", "x", "4"), 84);
}

Test(do_op, division_by_zero)
{
    cr_redirect_stdout();
    do_op("5", "/", "0");
    cr_assert_stdout_eq_str("Stop: division by zero\n");
}

Test(do_op, modulo_by_zero)
{
    cr_redirect_stdout();
    do_op("5", "%", "0");
    cr_assert_stdout_eq_str("Stop: modulo by zero\n");
}

Test(do_op, invalid_argument_count)
{
    cr_assert_eq(do_op("5", "", "0"), 84);
    cr_assert_eq(do_op("5", "/", "0"), 84);
    cr_assert_eq(do_op("5", "%", "0"), 84);
}
