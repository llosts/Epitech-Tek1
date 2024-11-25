/*
** EPITECH PROJECT, 2024
** my_sort_list
** File description:
** sort the linked list given in parameter
*/

#include <stddef.h>

#include "mylist.h"

static void my_insert_sorted_in_list(linked_list_t **sorted,
    linked_list_t *new_node, int (*cmp)())
{
    linked_list_t *current = NULL;

    if (*sorted == NULL || (*cmp)(new_node->data, (*sorted)->data) < 0) {
        new_node->next = *sorted;
        *sorted = new_node;
    } else {
        current = *sorted;
        while (current->next != NULL &&
    (*cmp)(current->next->data, new_node->data) < 0) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
    return;
}

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
    linked_list_t *current = NULL;
    linked_list_t *next = NULL;
    linked_list_t *sorted = NULL;

    if (*begin == NULL || (*begin)->next == NULL)
        return;
    current = *begin;
    while (current != NULL) {
        next = current->next;
        my_insert_sorted_in_list(&sorted, current, cmp);
        current = next;
    }
    *begin = sorted;
}
