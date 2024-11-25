/*
** EPITECH PROJECT, 2024
** unit test
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str);

#include <criterion/criterion.h>
#include <stddef.h>

Test(my_str_isalpha, only_alpha_character)
{
    cr_assert_eq(my_str_isalpha("HelloWorld"), 1);
}

Test(my_str_isalpha, mixed_with_digits_character)
{
    cr_assert_eq(my_str_isalpha("hello123"), 0);
}

Test(my_str_isalpha, empty_string)
{
    cr_assert_eq(my_str_isalpha(""), 1);
}

Test(my_str_isalpha, special_character)
{
    cr_assert_eq(my_str_isalpha("Hello!"), 0);
}

Test(my_str_isalpha, only_uppercase_character)
{
    cr_assert_eq(my_str_isalpha("HELLO"), 1);
}

Test(my_str_isalpha, test_with_null_string)
{
    char *str = NULL;
    cr_assert_eq(my_str_isalpha(str), 0);
}


