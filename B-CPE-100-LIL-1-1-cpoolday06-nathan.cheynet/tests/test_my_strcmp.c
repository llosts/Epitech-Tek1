/*
** EPITECH PROJECT, 2024
** units tests
** File description:
** test for the funciton my_strcmp.c
*/

int my_strcmp(char const *str1, char const *str2);

#include <criterion/criterion.h>
#include <string.h>

Test(my_strcmp, strcmp_equal_string)
{
    cr_assert_eq(my_strcmp("Hello", "Hello"), strcmp("Hello", "Hello"));
}

Test(my_strcmp, strcmp_different_string)
{
    cr_assert_eq(my_strcmp("Hello everyone", "World conquest"), strcmp("Hello everyone", "World conquest"));
}

Test(my_strcmp, strcmp_longer_string)
{
    cr_assert_eq(my_strcmp("HelloWorld", "Hello") , strcmp("HelloWorld", "Hello"));
}

Test(my_strcmp, strcmp_partial_string)
{
    cr_assert_eq(my_strcmp("Hello", "Hel"), strcmp("Hello", "Hel"));
}

Test(my_strcmp, strcmp_empty_string)
{
    cr_assert_eq(my_strcmp("", ""), strcmp("", ""));
}
