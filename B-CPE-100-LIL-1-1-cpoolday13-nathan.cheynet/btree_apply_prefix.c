/*
** EPITECH PROJECT, 2024
** btree_apply_prefix
** File description:
** executes the function given, in a pre-order tree traversal
*/

#include <stddef.h>

#include "btree.h"

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    if (root == NULL)
        return;
    (*applyf)(root->item);
    btree_apply_prefix(root->left, (*applyf));
    btree_apply_prefix(root->right, (*applyf));
}
