/*
** EPITECH PROJECT, 2024
** my_showmem
** File description:
** prints a memory dump
*/

#include <stddef.h>
#include <unistd.h>

#include "my.h"

static void my_print_hex_address(int address)
{
    char *hex = "0123456789abcdef";

    for (int i = 28; i >= 0; i -= 4)
        my_putchar(hex[(address >> i) & 0xF]);
    my_putchar(':');
    my_putchar(' ');
}

static void my_print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    my_putchar(hex[c / 16]);
    my_putchar(hex[c % 16]);
}

static int my_char_isprintable(char c)
{
    if (c >= ' ' && c <= '~')
        return 1;
    return 0;
}

static void display_content_to_hex(char const *str, int index, int size)
{
    for (int j = 0; j < 16; j++) {
        if (index + j < size)
            my_print_hex((unsigned char)str[index + j]);
        else {
            my_putchar(' ');
            my_putchar(' ');
        }
        if (j % 2 == 1)
            my_putchar(' ');
    }
}

static void my_showmem_line(char const *str, int index, int size)
{
    int i = 0;

    my_print_hex_address(index);
    display_content_to_hex(str, index, size);
    while (i < 16 && index + i < size) {
        if (my_char_isprintable(str[index + i]) != 0)
            my_putchar(str[index + i]);
        else
            my_putchar('.');
        i += 1;
    }
    my_putchar('\n');
}

int my_showmem(char const *str, int size)
{
    int index = 0;

    if (str == NULL || size <= 0)
        return 0;
    while (index < size) {
        my_showmem_line(str, index, size);
        index += 16;
    }
    return 0;
}
