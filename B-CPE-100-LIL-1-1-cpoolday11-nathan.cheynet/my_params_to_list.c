/*
** EPITECH PROJECT, 2024
** my_params_to_list
** File description:
** creates a new list from the command line arguments
*/

#include <stdlib.h>

#include "mylist.h"

static linked_list_t *create_node(void *data)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));

    if (new_node == NULL)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *head = NULL;
    linked_list_t *temp = NULL;
    int index = 0;

    while (index < ac) {
        temp = create_node(av[index]);
        if (temp == NULL)
            return NULL;
        temp->next = head;
        head = temp;
        index += 1;
    }
    return head;
}
