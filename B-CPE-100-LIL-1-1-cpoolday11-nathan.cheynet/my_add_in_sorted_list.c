/*
** EPITECH PROJECT, 2024
** my_add_in_sorted_list
** File description:
** add a node sorted in the list
*/

#include <stdlib.h>

#include "mylist.h"

static linked_list_t *create_new_node(void *data)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));

    if (new_node == NULL)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
    linked_list_t *new_node = create_new_node(data);
    linked_list_t *current = *begin;

    if (new_node == NULL)
        return;
    if (*begin == NULL || (*cmp)(data, (*begin)->data) < 0) {
        new_node->next = *begin;
        *begin = new_node;
        return;
    }
    while (current->next != NULL && (*cmp)(data, current->next->data) > 0)
        current = current->next;
    new_node->next = current->next;
    current->next = new_node;
}
