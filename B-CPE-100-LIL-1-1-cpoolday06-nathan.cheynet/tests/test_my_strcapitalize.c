/*
** EPITECH PROJECT, 2024
** units tests
** File description:
** test for the funciton my_strcapitalize.c
*/

char *my_strcapitalize(char *str);

#include <criterion/criterion.h>

Test(my_strcapitalize, capitalize_basic_test)
{
    char str[] = "hello world";
    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hello World");
}

Test(my_strcapitalize, capitalize_with_punctuation)
{
    char str[] = "hello, how are you?";
    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hello, How Are You?");
}

Test(my_strcapitalize, capitalize_mixed_case)
{
    char str[] = "hElLo woRlD";
    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hello World");
}

Test(my_strcapitalize, capitalize_empty_string)
{
    char str[] = "";
    my_strcapitalize(str);
    cr_assert_str_eq(str, "");
}
