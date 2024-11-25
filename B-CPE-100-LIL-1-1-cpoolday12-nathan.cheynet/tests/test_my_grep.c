/*
** EPITECH PROJECT, 2024
** test_my_grep
** File description:
** units test for the grep program
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_grep.h"
#include <fcntl.h>
#include <unistd.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(grep_file, file_with_pattern, .init = redirect_all_std)
{
    int ret = my_grep("../tests/test.txt", "Hello");
    cr_assert_eq(ret, 0);
    cr_assert_stdout_eq_str("Hello World\n");
}

Test(grep_file, file_without_pattern, .init = redirect_all_std)
{
    int ret = my_grep("../tests/empty.txt", "Hello");
    cr_assert_eq(ret, 0);
    cr_assert_stdout_eq_str("");
}

Test(grep_file, file_does_not_exist, .init = redirect_all_std)
{
    int ret = my_grep("non_existing_file.txt", "Hello");
    cr_assert_eq(ret, 84);
    cr_assert_stderr_eq_str("grep: No such file or directory\n");
}

Test(grep_file, permission_denied, .init = redirect_all_std)
{
    int ret = my_grep("/root/", "Hello");
    cr_assert_eq(ret, 84);
    cr_assert_stderr_eq_str("grep: Permission denied\n");
}
