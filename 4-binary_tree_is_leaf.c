#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_leaf - Fct check if a node is a leaf of a binary tree.
 * @node: Is a pointer to the node to check.
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
