/*
** EPITECH PROJECT, 2024
** my_list_size
** File description:
** get the size of a list
*/

#include <stddef.h>

#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int count = 0;

    while (begin != NULL) {
        count += 1;
        begin = begin->next;
    }
    return count;
}
