/*
** EPITECH PROJECT, 2024
** unit test
** File description:
** my_str_islower
*/

int my_str_islower(char const *str);

#include <criterion/criterion.h>

Test(my_str_islower, only_lower_character)
{
    cr_assert_eq(my_str_islower("helloworld"), 1);
}

Test(my_str_islower, contain_non_lower_character)
{
    cr_assert_eq(my_str_islower("HelloWorld"), 0);
}

Test(my_str_islower, empty_string)
{
    cr_assert_eq(my_str_islower(""), 1);
}

Test(my_str_islower, lower_character_and_digits)
{
    cr_assert_eq(my_str_islower("hello123"), 0);
}

Test(my_str_islower, test_with_null_string)
{
    char *str = NULL;
    cr_assert_eq(my_str_islower(str), 0);
}
