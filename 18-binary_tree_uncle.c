#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node:  pointer to the node to find the uncle
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int value;
	binary_tree_t *commonparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	commonparent = node->parent->parent;
	value = node->parent->n;
	if (commonparent->left && commonparent->right)
	{
		if (commonparent->left->n == value)
			return (commonparent->right);
		return (commonparent->left);
	}
	return (NULL);
}
