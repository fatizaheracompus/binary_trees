#include "binary_trees.h"

/**
 * binary_tree_leaves - fct counts the leaves in a binary tree.
 * @tree: Is a pointer to the root node of the tree to count the leaves.
 * Return: The numbers of the leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lv = 0;

	if (tree != NULL)
	{
		lv += (!tree->left && !tree->right) ? 1 : 0;
		lv += binary_tree_leaves(tree->left);
		lv += binary_tree_leaves(tree->right);
	}
	return (lv);
}
