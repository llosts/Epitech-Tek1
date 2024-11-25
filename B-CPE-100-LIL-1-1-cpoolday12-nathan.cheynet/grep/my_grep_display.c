/*
** EPITECH PROJECT, 2024
** my_grep_display
** File description:
** function to display the content read to the buffer
*/

#include <unistd.h>

#include "my.h"
#include "my_grep.h"

int my_grep_display(int fd, char *buffer, char const *pattern)
{
    ssize_t bytes_read = my_read_file(fd, buffer);

    if (bytes_read < 0)
        return 84;
    buffer[bytes_read] = '\0';
    if (my_strstr(buffer, pattern) != 0)
        write(1, buffer, bytes_read);
    return 0;
}
