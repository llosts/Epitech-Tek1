/*
** EPITECH PROJECT, 2024
** my_showstr
** File description:
** special display string
*/

static void my_print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    my_putchar('\\');
    my_putchar(hex[c / 16]);
    my_putchar(hex[c % 16]);
}

static int my_char_isprintable(char c)
{
    if (c >= ' ' && c <= '~')
        return 1;
    return 0;
}

int my_showstr(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (my_char_isprintable(str[index]) == 0)
            my_print_hex((unsigned char)str[index]);
        else
            my_putchar(str[index]);
        index += 1;
    }
    return 0;
}
