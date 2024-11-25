/*
** EPITECH PROJECT, 2024
** my_open_read_file
** File description:
** function to open and read a file
*/

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#include "my_cat.h"

int my_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        write(2, "No such file or directory\n", 26);
        return -1;
    }
    return fd;
}

int my_read_file(int fd, char (*buffer)[])
{
    int size_read = 0;

    size_read = read(fd, buffer, MAX_SIZE - 1);
    if (size_read == -1) {
        write(2, "Error reading the file\n", 23);
        return -1;
    }
    return size_read;
}
