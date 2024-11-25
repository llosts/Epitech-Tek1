/*
** EPITECH PROJECT, 2024
** my_find_node
** File description:
** return the first node, which contains data equal to the reference data
*/

#include <stddef.h>

#include "mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin,
    void const *data_ref, int (*cmp)())
{
    linked_list_t const *current = begin;

    while (current != NULL) {
        if ((*cmp)(current->data, data_ref) == 0)
            return (linked_list_t *)current;
        current = current->next;
    }
    return NULL;
}
