/*
** EPITECH PROJECT, 2024
** btree_search_item
** File description:
** turns the first element that corresponds to data_ref
*/

#include <stddef.h>

#include "btree.h"

void *btree_search_item(btree_t const *root,
    void const *data_ref, int (*cmpf)())
{
    void *result = NULL;

    if (root == NULL)
        return NULL;
    result = btree_search_item(root->left, data_ref, cmpf);
    if (result != NULL)
        return result;
    if (cmpf(root->item, data_ref) == 0)
        return root->item;
    return btree_search_item(root->right, data_ref, cmpf);
}
