/*
** EPITECH PROJECT, 2024
** my_print_comb2
** File description:
** print a specific combinaison
*/

void my_helper(int i)
{
    for (int j = i + 1; j <= 99; j++) {
        my_putchar((i / 10) + '0');
        my_putchar((i % 10) + '0');
        my_putchar(' ');
        my_putchar((j / 10) + '0');
        my_putchar((j % 10) + '0');
        if (!(i == 98 && j == 99)) {
            my_putchar(',');
            my_putchar(' ');
        }
    }
}

int my_print_comb2(void)
{
    for (int i = 0; i <= 98; i++) {
        my_helper(i);
    }
    return 0;
}
