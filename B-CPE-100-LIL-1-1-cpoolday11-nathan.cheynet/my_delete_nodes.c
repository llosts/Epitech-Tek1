/*
** EPITECH PROJECT, 2024
** my_delete_nodes
** File description:
** emoves all nodes containing data equal to data_ref
*/

#include <stdlib.h>

#include "mylist.h"

static void my_delete_helper(linked_list_t **begin, linked_list_t *current,
    linked_list_t *previous)
{
    if (previous == NULL)
        *begin = current->next;
    else
        previous->next = current->next;
}

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *current = *begin;
    linked_list_t *previous = NULL;
    int removed = 0;

    while (current != NULL) {
        if ((*cmp)(current->data, data_ref) == 0) {
            my_delete_helper(begin, current, previous);
            current = current->next;
            removed++;
        } else {
            previous = current;
            current = current->next;
        }
    }
    return removed;
}
