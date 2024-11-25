/*
** EPITECH PROJECT, 2024
** my_concat_list
** File description:
** concat two linked list together
*/

#include <stdlib.h>

#include "mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *current = *begin1;

    if (*begin1 == NULL)
        *begin1 = begin2;
    else {
        while (current->next != NULL)
            current = current->next;
        current->next = begin2;
    }
}
