/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** print a string
*/

int my_putstr(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        my_putchar(str[index]);
        index += 1;
    }
    return 0;
}