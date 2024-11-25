/*
** EPITECH PROJECT, 2024
** units tests
** File description:
** test for the funciton my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int n);

#include <criterion/criterion.h>
#include <string.h>

Test(my_strncpy, strncpy_basic)
{
    char dest[20] = {0};

    my_strncpy(dest ,"Hello, World!", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, strncpy_entire_string)
{
    char dest[20] = {0};

    my_strncpy(dest, "Hello", 20);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, strncpy_empty_string)
{
    char dest[20] = {0};

    my_strncpy(dest, "", 5);
    cr_assert_str_eq(dest, "");
}
