#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_sibling - Fct that find the sibling of
 *                       node in binary tree.
 * @node: Is a  pointer to node to find the sibling.
 *
 * Return: If node is NULL or there  no sibling - NULL.
 *         Otherwise -  pointer to  sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
