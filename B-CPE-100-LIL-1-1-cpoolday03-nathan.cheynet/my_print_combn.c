/*
** EPITECH PROJECT, 2024
** my_print_combn
** File description:
** print combinaison
*/

void print_comb_rec(int n, int current, int *digits, int index)
{
    if (index == n) {
        for (int i = 0; i < n; i++) {
            my_putchar(digits[i] + '0');
        }
        if (!(digits[0] == 10 - n && digits[n - 1] == 9)) {
            my_putchar(',');
            my_putchar(' ');
        }
        return;
    }
    for (int i = current; i <= 9; i++) {
        digits[index] = i;
        print_comb_rec(n, i + 1, digits, index + 1);
    }
}

int my_print_combn(int n)
{
    int max_size = (n > 0) ? n : 0;
    int digits[max_size];

    if (max_size == 0)
        return 0;
    print_comb_rec(n, 0, digits, 0);
    return 0;
}
