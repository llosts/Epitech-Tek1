/*
** EPITECH PROJECT, 2024
** my_apply_on_nodes
** File description:
** apply the function given in parameter to the data of each node
*/

#include <stddef.h>

#include "mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    while (begin != NULL) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return 0;
}
