/*
** EPITECH PROJECT, 2024
** my_open_read_file
** File description:
** function to open and read a file
*/

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#include "my_grep.h"

int my_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        if (errno == ENOENT)
            write(2, "grep: No such file or directory\n", 32);
        if (errno == EACCES)
            write(2, "grep: Permission denied\n", 24);
        close(fd);
        return -1;
    }
    return fd;
}

int my_read_file(int fd, char *buffer)
{
    ssize_t bytes_read = 0;

    bytes_read = read(fd, buffer, MAX_SIZE - 1);
    if (bytes_read == -1) {
        write(2, "grep: Error Reading the file\n", 29);
        close(fd);
        return -1;
    }
    return bytes_read;
}
