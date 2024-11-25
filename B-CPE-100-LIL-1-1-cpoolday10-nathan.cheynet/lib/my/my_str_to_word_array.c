/*
** EPITECH PROJECT, 2024
** my_str_to_word_array
** File description:
** parse a str to a word array
*/

#include <stddef.h>
#include <stdlib.h>

#include "my.h"

static int my_char_isalphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

static int my_count_word(char const *str)
{
    int in_word = 0;
    int count = 0;
    int i = 0;
    int c = 0;

    while (str[i] != '\0') {
        c = my_char_isalphanum(str[i]);
        if (c == 1 && in_word == 0) {
            count += 1;
            in_word = 1;
        }
        if (c == 0 && in_word == 1)
            in_word = 0;
        i += 1;
    }
    return count;
}

static char *my_word_dup(char const *str, int start, int end)
{
    int len = end - start;
    char *result = malloc(sizeof(char) * (len + 1));

    if (result == NULL)
        return NULL;
    my_strncpy(result, &str[start], len);
    return result;
}

static char **my_str_to_word_array_helper(char *str_copy, int nbr_words)
{
    int index = 0;
    int start = 0;
    char **result = malloc(sizeof(char *) * (nbr_words + 1));

    if (str_copy == NULL || result == NULL)
        return NULL;
    for (int i = 0; str_copy[i] != '\0'; i++) {
        if (my_char_isalphanum(str_copy[i]) == 0)
            continue;
        start = i;
        while (str_copy[i] != '\0' && my_char_isalphanum(str_copy[i]) == 1)
            i += 1;
        result[index] = my_word_dup(str_copy, start, i);
        if (result[index] == NULL)
            return NULL;
        index += 1;
    }
    result[nbr_words] = NULL;
    return result;
}

char **my_str_to_word_array(char const *str)
{
    char *str_copy = NULL;
    char **result = NULL;
    int nbr_words = 0;

    if (str == NULL)
        return NULL;
    str_copy = my_strdup(str);
    if (str_copy == NULL)
        return NULL;
    nbr_words = my_count_word(str_copy);
    result = my_str_to_word_array_helper(str_copy, nbr_words);
    if (result == NULL)
        return NULL;
    free(str_copy);
    return result;
}
