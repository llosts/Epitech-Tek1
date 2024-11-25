/*
** EPITECH PROJECT, 2024
** test_my_read_file
** File description:
** unit test for reading a file
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>

#include "my_cat.h"

Test(my_read_file, file_dont_exist, .timeout = 2)
{
    int fd = my_open_file("incorrect.txt");
    char buffer[MAX_SIZE];
    int size = my_read_file(fd, &buffer);

    cr_assert_eq(size, -1, "Expected no filepath found");
}

Test(my_read_file, msg_file_dont_exist, .timeout = 2)
{
    int	fd = my_open_file("incorrect.txt");
    char buffer[MAX_SIZE];

    cr_redirect_stderr();
    my_read_file(fd, &buffer);
    cr_assert_stderr_eq_str("Error reading the file\n");
}

Test(my_read_file, file_exist, .timeout = 2)
{
    int fd = my_open_file("../tests/test.txt");
    char buffer[MAX_SIZE];
    int size = my_read_file(fd, &buffer);

    cr_assert_neq(size, -1, "Expected data to be read from a file");
}

Test(my_read_file, buffer_get_file_info, .timeout = 2)
{
    int fd = my_open_file("../tests/test.txt");
    char buffer[12];
    int size = my_read_file(fd, &buffer);

    cr_assert_neq(size, -1, "Expected data to be read from a file and dont return -1");
    cr_assert_str_eq(buffer, "Hello World\n");
}

Test(my_read_file, empty_file)
{
    int fd = my_open_file("../tests/empty.txt");
    char buffer[MAX_SIZE];
    int size = my_read_file(fd, &buffer);

    cr_assert_eq(size, 0, "Expected no data to be read from an empty file");
}

