#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

unsigned char is_leafe(const binary_tree_t *nd);
size_t is_depth(const binary_tree_t *tree);
const binary_tree_t *get_leafe(const binary_tree_t *tree);
int perfect_recursives(const binary_tree_t *tree,
		size_t leafe_depth, size_t lvl);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leafe - fct checks if node is  leaf of  binary tree.
 * @nd: Is a pointer to node to checke.
 *
 * Return: If the node is a leafe, 1, otherwise, 0.
 */
unsigned char is_leafe(const binary_tree_t *nd)
{
	return ((nd->left == NULL && nd->right == NULL) ? 1 : 0);
}

/**
 * is_depth - fct that returns depth of given
 *         node in  binary tree.
 * @tree: Is a pointer to  node to measure depth.
 *
 * Return: depth of the node.
 */
size_t is_depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leafe - Fct returns leaf of binary tree.
 * @tree: Is a pointer to  root node of tree to find leafe in.
 *
 * Return: pointer to first encountere leafe.
 */
const binary_tree_t *get_leafe(const binary_tree_t *tree)
{
	if (is_leafe(tree) == 1)
		return (tree);
	return (tree->left ? get_leafe(tree->left) : get_leafe(tree->right));
}

/**
 * perfect_recursives - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @leafe_depth: The depth of one leaf in the binary tree.
 * @lvl: Level of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int perfect_recursives(const binary_tree_t *tree,
		size_t leafe_depth, size_t lvl)
{
	if (is_leafe(tree))
		return (lvl == leafe_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (perfect_recursives(tree->left, leafe_depth, lvl + 1) &&
		perfect_recursives(tree->right, leafe_depth, lvl + 1));
}

/**
 * binary_tree_is_perfect - Fct checks if binary tree is perfect.
 * @tree: Is a pointer to root node of tree to checke.
 *
 * Return: If tree is NULL or not perfecte, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (perfect_recursives(tree, depth(get_leafe(tree)), 0));
}
