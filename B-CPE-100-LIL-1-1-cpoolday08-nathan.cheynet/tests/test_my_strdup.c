/*
** EPITECH PROJECT, 2024
** test_my_strdup
** File description:
** unit test for my_strdup
*/

char *my_strdup(char const *src);

#include <criterion/criterion.h>
#include <string.h>

Test(my_strdup, strdup_basic)
{
    char *dest = "Hello, World!";
    cr_assert_str_eq(my_strdup(dest), strdup(dest));
}

Test(my_strdup, strdup_entire_string)
{
    char *dest = "Hello";
    cr_assert_str_eq(my_strdup(dest), strdup(dest));
}

Test(my_strdup, strdup_empty_string)
{
    char *dest = "";
    cr_assert_str_eq(my_strdup(dest), strdup(dest));
}

Test(my_strdup, strdup_null_string)
{
    char *dest = NULL;
    cr_assert_null(my_strdup(dest));
}
