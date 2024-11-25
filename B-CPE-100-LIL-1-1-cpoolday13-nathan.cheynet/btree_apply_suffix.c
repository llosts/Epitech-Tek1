/*
** EPITECH PROJECT, 2024
** btree_apply_suffix
** File description:
** executes the function given, in a post-order tree traversal
*/

#include <stddef.h>

#include "btree.h"

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root == NULL)
        return;
    btree_apply_suffix(root->left, (*applyf));
    btree_apply_suffix(root->right, (*applyf));
    (*applyf)(root->item);
}
