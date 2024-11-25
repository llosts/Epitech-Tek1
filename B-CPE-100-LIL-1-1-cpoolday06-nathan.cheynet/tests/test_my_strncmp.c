/*
** EPITECH PROJECT, 2024
** units tests
** File description:
** test for the funciton my_strncmp.c
*/

int my_strncmp(char const *str1, char const *str2, int n);

#include <criterion/criterion.h>
#include <string.h>

Test(my_strncmp, strncmp_equal_string)
{
    cr_assert_eq(my_strncmp("Hello", "Hello", 5), strncmp("Hello", "Hello", 5));
}

Test(my_strncmp, strncmp_different_string)
{
    cr_assert_eq(my_strncmp("Hello", "World", 5), strncmp("Hello", "World", 5));
}

Test(my_strncmp, strncmp_longer_string)
{
    cr_assert_eq(my_strncmp("HelloWorld", "Hello", 10), strncmp("HelloWorld", "Hello", 10));
}

Test(my_strncmp, strncmp_partial_string)
{
    cr_assert_eq(my_strncmp("Hello", "Hel", 30), strncmp("Hello", "Hel", 30));
}

Test(my_strncmp, strncmp_empty_string)
{
    cr_assert_eq(my_strncmp("", "", 5), strncmp("", "", 5));
}
