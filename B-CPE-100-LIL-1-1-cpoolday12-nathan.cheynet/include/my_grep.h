/*
** EPITECH PROJECT, 2024
** my_grep
** File description:
** header for my_grep program
*/

#ifndef MY_GREP_H_
    #define MY_GREP_H_

    #define MAX_SIZE 30000

int my_open_file(char const *filepath);
int my_read_file(int fd, char *buffer);
int my_grep_display(int fd, char *buffer, char const *pattern);
int my_grep_stdin(const char *pattern);
int my_grep(char const *filename, char const *pattern);

#endif
