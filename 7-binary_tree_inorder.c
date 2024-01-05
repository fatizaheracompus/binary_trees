#include "binary_trees.h"

/**
 * binary_tree_inorder - ft goes through  binary tree using in-order traversal
 * @tree: Is a pointer to the root node of the tree to traverse
 *
 * @func: Is a pointer to  function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
