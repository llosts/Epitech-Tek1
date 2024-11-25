/*
** EPITECH PROJECT, 2024
** my_cat
** File description:
** header for the cat program
*/

#ifndef MY_CAT_H_
    #define MY_CAT_H_

    #define MAX_SIZE 30000

int my_cat(int argc, char const *argv[]);
int my_open_file(char const *filepath);
int my_read_file(int fd, char (*buffer)[]);

#endif
