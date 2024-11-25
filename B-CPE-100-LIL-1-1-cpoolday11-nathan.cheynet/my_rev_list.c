/*
** EPITECH PROJECT, 2024
** my_rev_list
** File description:
** display a linked list in reverse
*/

#include <stddef.h>

#include "mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *current = *begin;
    linked_list_t *next = NULL;

    while (current->next != NULL) {
        next = current->next;
        current->next = next->next;
        next->next = *begin;
        *begin = next;
    }
}
