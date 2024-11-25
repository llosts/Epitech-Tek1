/*
** EPITECH PROJECT, 2024
** btree_create_node
** File description:
** create a node for a binary tree
*/

#include <stdlib.h>

#include "btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *new_node = malloc(sizeof(btree_t));

    if (new_node == NULL)
        return NULL;
    new_node->item = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
