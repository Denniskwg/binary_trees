#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r, balance;

	if (!tree)
		return (0);
	l = tree->left ? height(tree->left) : -1;
	r = tree->right ? height(tree->right) : -1;
	balance = l - r;
	return (balance);
}
/**
 * height - calculates height of a binary tree
 * @tree: root node of a binary tree
 * Return: height of a binary tree
 */
int height(const binary_tree_t *tree)
{
	int l, r, h;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	l = 1 + height(tree->left);
	r = 1 + height(tree->right);
	h = r > l ? r : l;
	return (h);
}
