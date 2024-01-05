#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * full_recursives - Checks if binary tree  full recursive.
 * @tree: Is a pointer to the root node of  tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int full_recursives(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    full_recursives(tree->left) == 0 ||
		    full_recursives(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Fct check if binary tree is full.
 * @tree: Is a pointer to root node of tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (full_recursives(tree));
}
