#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:  pointer to the node to insert the right-child in
 * @value:  value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a right-child, the new node must take its place
 * and the old right-child must be set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(struct binary_tree_s));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	else
		new->right = NULL;
	parent->right = new;
	return (new);
}
