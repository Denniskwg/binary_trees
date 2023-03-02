#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of a binary tree
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (l + 1 + r);
}
