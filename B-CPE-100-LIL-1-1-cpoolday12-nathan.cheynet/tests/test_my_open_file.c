/*
** EPITECH PROJECT, 2024
** test_my_open_file
** File description:
** unit test for opening a file
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include <unistd.h>

#include "my_cat.h"

Test(my_open_file, argument_is_null, .timeout = 2)
{
    int fd = my_open_file(NULL);
    cr_assert_eq(fd, -1, "Expected to not find the filepath and return -1");
    close(fd);
}

Test(my_open_file, file_dont_exist, .timeout = 2)
{
    int fd = my_open_file("incorrect.txt");
    cr_assert_eq(fd, -1, "Expected to not find the filepath and return -1");
    close(fd);
}

Test(my_open_file, msg_file_dont_exist, .timeout = 2)
{
    cr_redirect_stderr();
    int fd = my_open_file("incorrect.txt");
    cr_assert_stderr_eq_str("No such file or directory\n");
    cr_assert_eq(fd, -1, "Expected to display the error msg and return -1");
    close(fd);
}

Test(my_open_file, file_exist, .timeout = 2)
{
    int fd = my_open_file("../tests/test.txt");
    cr_assert_neq(fd, -1, "Expected to find the file and don't return -1");
    close(fd);
}
