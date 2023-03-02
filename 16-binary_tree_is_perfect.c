#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node of the binary tree
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r, perfect;

	if (!tree)
		return (0);
	l = height1(tree->left);
	r = height1(tree->right);
	perfect = l == r ? 1 : 0;
	return (perfect);
}
/**
 * height1 - calculates height of a binary tree
 * @tree: root node of a binary tree
 * Return: height of a binary tree
 */
int height1(const binary_tree_t *tree)
{
	int l, r, h;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	l = 1 + height1(tree->left);
	r = 1 + height1(tree->right);
	h = r > l ? r : l;
	return (h);
}
