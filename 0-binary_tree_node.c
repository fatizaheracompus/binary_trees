#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Create a binary tree node.
 * @parent: Is a pointer to the parent node to create.
 * @value: Is The value to put in the new node.
 *
 * Return: If an error  - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	nw = malloc(sizeof(binary_tree_t));
	if (nw == NULL)
		return (NULL);

	nw->n = value;
	nw->parent = parent;
	nw->left = NULL;
	nw->right = NULL;

	return (nw);
}
