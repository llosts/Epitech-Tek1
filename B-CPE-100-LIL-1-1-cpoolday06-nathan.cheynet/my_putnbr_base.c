/*
** EPITECH PROJECT, 2024
** my_putnbr_base
** File description:
** convert and display a decimal number in given base
*/

static int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count += 1;
    return count;
}

static int my_putnbr_base_rec(int nbr, char const *base, int base_len)
{
    int count = 0;

    if (nbr >= base_len)
        count += my_putnbr_base_rec(nbr / base_len, base, base_len);
    my_putchar(base[nbr % base_len]);
    count += 1;
    return count;
}

static int check_duplicate_char(char const *base, int base_len, int i)
{
    for (int j = i + 1; j < base_len; j++) {
        if (base[i] == base[j])
            return 0;
    }
    return 1;
}

static int my_base_isvalid(char const *base, int base_len)
{
    if (base_len < 2)
        return 0;
    for (int i = 0; i < base_len; i++) {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        if (check_duplicate_char(base, base_len, i) == 0)
            return 0;
    }
    return 1;
}

int my_putnbr_base(int nbr, char const *base)
{
    int base_len = my_strlen(base);
    int count = 0;

    if (my_base_isvalid(base, base_len) == 0)
        return 0;
    if (nbr < 0 && base_len == 10) {
        my_putchar('-');
        nbr = -nbr;
        count += 1;
    }
    if (nbr == 0) {
        my_putchar(base[0]);
        return 1;
    }
    count += my_putnbr_base_rec(nbr, base, base_len);
    return count;
}
