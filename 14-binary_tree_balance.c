#include "binary_trees.h"

/**
 * binary_tree_balance - fct measures the balance factor of a binary tree.
 * @tree: Is a pointer to  root node of  tree to measure the balance factore.
 * Return: If tree is NULL, return 0, else return balance factore.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - fct measures the height of binary tree.
 * @tree: Is a  pointer of the root node of  tree to measure height.
 *
 * Return: If tree is NULL, the function must return 0,else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != 0) 
	{
		size_t lf = 0, rt = 0;

		lf = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rt = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lf > rt) ? lf : rt);
	}
	return (0);
}
