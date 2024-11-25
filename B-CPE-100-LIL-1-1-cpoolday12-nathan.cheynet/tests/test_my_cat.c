/*
** EPITECH PROJECT, 2024
** test_my_cat
** File description:
** unit test for the funtion my_cat
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <stdio.h>

#include "my_cat.h"

Test(my_cat, successful_cat_execution, .timeout = 2)
{
    cr_redirect_stdout();
    char *argv[] = {"./cat", "../tests/test.txt", NULL};
    int result = my_cat(2, (char const **)argv);
    cr_assert_eq(result, 0, "Expected successful cat execution");
    cr_assert_stdout_eq_str("Hello World\n");
}

Test(my_cat, successful_mul_execution, .timeout = 2)
{
    cr_redirect_stdout();
    char *argv[] = {"./cat", "../tests/test.txt", "../tests/empty.txt", NULL};
    int result = my_cat(3, (char const **)argv);
    cr_assert_eq(result, 0, "Expected successful cat execution");
    cr_assert_stdout_eq_str("Hello World\n");
}

Test(my_cat, invalid_file, .timeout = 2)
{
    cr_redirect_stderr();
    char *argv[] = {"./cat", "non_existing_file.txt", NULL};
    int result = my_cat(2, (char const **)argv);
    cr_assert_eq(result, 84, "Expected failure due to non-existing file");
    cr_assert_stderr_eq_str("No such file or directory\n");
}

Test(my_cat, no_filepath_given, .timeout = 2)
{
    cr_redirect_stdout();
    char *input = "Hello world\n";
    FILE *tmp = tmpfile();
    fwrite(input, sizeof(char), strlen(input), tmp);
    rewind(tmp);
    int tmpfd = fileno(tmp);
    dup2(tmpfd, STDIN_FILENO);
    char *argv[] = {"./cat", NULL};
    int result = my_cat(1, (char const **)argv);
    cr_assert_stdout_eq_str("Hello world\n");
    cr_assert_eq(result, 0, "Expected success when stopping using Ctrl + D");
    fclose(tmp);
}
