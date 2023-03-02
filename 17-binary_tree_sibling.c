#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int value;

	if (!node || !node->parent)
		return (NULL);
	value = node->n;
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left->n == value)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}
