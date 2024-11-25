/*
** EPITECH PROJECT, 2024
** my_evil_str
** File description:
** swap each characters of a string
*/

char *my_evil_str(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
        end += 1;
    end -= 1;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str;
}
