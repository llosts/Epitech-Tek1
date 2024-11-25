/*
** EPITECH PROJECT, 2024
** my_cat
** File description:
** reproduce the shell command cat
*/

#include <unistd.h>

#include "my_cat.h"

static int my_special_cat(void)
{
    char buffer[MAX_SIZE];
    int size_read = 1;

    while (size_read != 0) {
        size_read = my_read_file(0, &buffer);
        if (size_read < 0)
            return 84;
        write(1, buffer, size_read);
    }
    return 0;
}

int my_cat(int argc, char const *argv[])
{
    int fd = 0;
    int size_read = 0;
    char buffer[MAX_SIZE];
    int index = 1;

    if (argc == 1)
        return my_special_cat();
    while (index < argc) {
        fd = my_open_file(argv[index]);
        if (fd < 0)
            return 84;
        size_read = my_read_file(fd, &buffer);
        if (size_read < 0)
            return 84;
        write(1, buffer, size_read);
        index += 1;
    }
    close(fd);
    return 0;
}
