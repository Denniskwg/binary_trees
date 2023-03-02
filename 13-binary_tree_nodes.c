#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1
 * child in a binary tree
 * @tree: pointer to the root node of a binary tree
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	l++;
	l += binary_tree_nodes(tree->left);
	r += binary_tree_nodes(tree->right);
	return (l + r);
}
