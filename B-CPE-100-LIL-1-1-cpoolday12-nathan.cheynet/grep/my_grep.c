/*
** EPITECH PROJECT, 2024
** my_grep
** File description:
** reproduce the command shell grep
*/

#include <unistd.h>
#include <fcntl.h>

#include "my_grep.h"

int my_grep_stdin(const char *pattern)
{
    char buffer[MAX_SIZE];
    char filename[MAX_SIZE];
    ssize_t bytes_read = 1;
    int fd = 0;

    while (bytes_read != 0) {
        bytes_read = my_read_file(0, filename);
        if (bytes_read < 0)
            return 84;
        filename[bytes_read - 1] = '\0';
        fd = open(filename, O_RDONLY);
        if (fd < 0)
            continue;
        if (my_grep_display(fd, buffer, pattern) == 84)
            return 84;
    }
    close(fd);
    return 0;
}

int my_grep(const char *filename, const char *pattern)
{
    char buffer[MAX_SIZE];
    int fd = my_open_file(filename);

    if (fd < 0)
        return 84;
    if (my_grep_display(fd, buffer, pattern) == 84)
        return 84;
    close(fd);
    return 0;
}
