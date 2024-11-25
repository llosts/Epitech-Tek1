/*
** EPITECH PROJECT, 2024
** btree_level_count
** File description:
** returns the size of the biggest branch given
*/

#include <stddef.h>

#include "btree.h"

size_t btree_level_count(btree_t const *root)
{
    size_t current_node = 1;
    size_t left_depth = 0;
    size_t right_depth = 0;

    if (root == NULL)
        return 0;
    left_depth = btree_level_count(root->left);
    right_depth = btree_level_count(root->right);
    if (left_depth > right_depth)
        return left_depth + current_node;
    else
        return right_depth + current_node;
}
