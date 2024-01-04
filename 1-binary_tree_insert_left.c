#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left-child * of another node.
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value: Is the value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 *If parent already has a left-child, the new node
 *must takes its place and the old left-child is set as
 *the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);

	nw = binary_tree_node(parent, value);
	if (nw == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nw->left = parent->left;
		parent->left->parent = nw;
	}
	parent->left = nw;

	return (nw);
}
