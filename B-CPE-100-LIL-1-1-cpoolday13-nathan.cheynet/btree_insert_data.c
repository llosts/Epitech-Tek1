/*
** EPITECH PROJECT, 2024
** btree_insert_data
** File description:
** inserts the item element into a tree
*/

#include <stddef.h>

#include "btree.h"

void btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
    if (*root == NULL) {
        *root = btree_create_node(item);
        return;
    }
    if ((*cmpf)((*root)->right, item) < 0)
        btree_insert_data(&((*root)->right), item, cmpf);
    else
        btree_insert_data(&((*root)->left), item, cmpf);
}
