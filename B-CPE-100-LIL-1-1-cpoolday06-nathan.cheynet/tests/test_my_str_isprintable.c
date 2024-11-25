/*
** EPITECH PROJECT, 2024
** unit test
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str);

#include <criterion/criterion.h>

Test(my_str_isprintable, only_printable_character)
{
    cr_assert_eq(my_str_isprintable("Hello World!"), 1);
}

Test(my_str_isprintable, contain_non_printable_character)
{
    cr_assert_eq(my_str_isprintable("Hello\n World\t"), 0);
}

Test(my_str_isprintable, empty_string)
{
    cr_assert_eq(my_str_isprintable(""), 1);
}

Test(my_str_isprintable, printable_symbole)
{
    cr_assert_eq(my_str_isprintable("!@#$%^&*()"), 1);
}

Test(my_str_isprintable, mixed_non_printable_character)
{
    cr_assert_eq(my_str_isprintable("Hello\x01World"), 0);
}

Test(my_str_isprintable, test_with_null_string)
{
    char *str = NULL;
    cr_assert_eq(my_str_isprintable(str), 0);
}
