/*
** EPITECH PROJECT, 2024
** btree_apply_infix
** File description:
** executes the function given, in a in-order tree traversal
*/

#include <stddef.h>

#include "btree.h"

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root == NULL)
        return;
    btree_apply_infix(root->left, (*applyf));
    (*applyf)(root->item);
    btree_apply_infix(root->right, (*applyf));
}
