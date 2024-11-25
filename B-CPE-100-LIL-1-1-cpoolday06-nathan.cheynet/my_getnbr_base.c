/*
** EPITECH PROJECT, 2024
** my_getnbr_base
** File description:
** get a number
*/

static int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
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

static int my_find_char_base(char c, char const *base)
{
    int index = 0;

    while (base[index] != '\0') {
        if (base[index] == c)
            return index;
        index += 1;
    }
    return -1;
}

static int my_find_sign(char const *str)
{
    int count_minus = 0;
    int index = 0;

    while (str[index] != '\0' && (str[index] == '-' || str[index] == '+')) {
        if (str[index] == '-')
            count_minus += 1;
        index += 1;
    }
    if (count_minus % 2 != 0)
        return -1;
    return 1;
}

int my_getnbr_base(char const *str, char const *base)
{
    long nb = 0;
    int value = 0;
    int index = 0;
    int sign = my_find_sign(str);
    int base_len = my_strlen(base);

    if (my_base_isvalid(base, base_len) == 0)
        return 0;
    while (str[index] == '-' || str[index] == '+')
        index += 1;
    while (str[index] != '\0') {
        value = my_find_char_base(str[index], base);
        if (value == -1)
            break;
        nb = nb * base_len + value;
        if (nb * sign > 2147483647 || nb * sign < -2147483648)
            return 0;
        index += 1;
    }
    return (int)(nb * sign);
}
