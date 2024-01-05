#include "binary_trees.h"

/**
 * binary_tree_nodes - fct counts node with at least 1 child in  binary tree.
 * @tree: Is a  pointer to the root node of the tree to count the number node
 * Return: If tree is NULL the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nd = 0;

	if (tree != NULL)
	{
		nd += (tree->left || tree->right) ? 1 : 0;
		nd += binary_tree_nodes(tree->left);
		nd += binary_tree_nodes(tree->right);
	}
	return (nd);
}
