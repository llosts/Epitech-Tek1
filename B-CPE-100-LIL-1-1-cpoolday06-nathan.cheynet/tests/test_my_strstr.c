/*
** EPITECH PROJECT, 2024
** units tests
** File description:
** test for the funciton my_strstr.c
*/

char *my_strstr(char *str, char const *to_find);

#include <criterion/criterion.h>
#include <string.h>

Test(my_strstr, strstr_basic)
{
    char str[] = "Hello, World!";
    cr_assert_str_eq(my_strstr(str, "World"), "World!");
}

Test(my_strstr, strstr_not_found)
{
    char str[] = "Hello, World!";
    cr_assert_null(my_strstr(str, "42"));
}

Test(my_strstr, strstr_empty_substring)
{
    char str[] = "Hello, World!";
    cr_assert_str_eq(my_strstr(str, ""), str);
}

Test(my_strstr, strstr_basic_at_the_start)
{
    char str[] = "Hello, World!";
    cr_assert_str_eq(my_strstr(str, "Hello"), "Hello, World!");
}
