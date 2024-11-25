/*
** EPITECH PROJECT, 2024
** units tests
** File description:
** test for my_revstr
*/

char *my_revstr(char *str);

#include <criterion/criterion.h>
#include <stddef.h>

Test(my_revstr, reverse_basic)
{
    char str[] = "abcdef";
    my_revstr(str);
    cr_assert_str_eq(str, "fedcba");
}
    
Test(my_revstr, reverse_with_space_string)
{
    char str[] = "Hello World";
    my_revstr(str);
    cr_assert_str_eq(str, "dlroW olleH");
}

Test(my_revstr, reverse_single_character)
{
    char str[] = "a";
    my_revstr(str);
    cr_assert_str_eq(str, "a");
}

Test(my_revstr, reverse_empty_string)
{
    char str[] = "";
    my_revstr(str);
    cr_assert_str_eq(str, "");
}

Test(my_revstr, reverse_palindrome)
{
    char str[] = "kayak";
    my_revstr(str);
    cr_assert_str_eq(str, "kayak");
}
