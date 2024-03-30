#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: tree
 * Return: n hieght
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = 1 + binary_tree_height(tree->left);
		r = 1 + binary_tree_height(tree->right);
		if (l > r)
			return (l);
		else
			return (r);
	}
	return (0);
}
/**
 * binary_tree_balance -  measures the balance
 * factor of a binary tree
 * @tree: tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
