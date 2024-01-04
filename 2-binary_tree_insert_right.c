#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another node.
 * @parent: Is a pointer to the node to insert the right-child in.
 * @value: Is the value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 * Description: If parent already has a right-child, the new node
 * takes its place and the old right-child is set as
 * the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);

	nw = binary_tree_node(parent, value);
	if (nw == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nw->right = parent->right;
		parent->right->parent = nw;
	}
	parent->right = nw;

	return (nw);
}
