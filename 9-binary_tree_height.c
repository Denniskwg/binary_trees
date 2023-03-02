#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of binary tree
 * If tree is NULL, your function must return 0
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r, height;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	l = 1 + binary_tree_height(tree->left);
	r = 1 + binary_tree_height(tree->right);
	height = r > l ? r : l;
	return (height);
}
