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

		if (tree->left)
			l = 1 + binary_tree_height(tree->left);
		if (tree->right)
			r = 1 + binary_tree_height(tree->right);
		if (l > r)
			return (l);
		else
			return (r);
	}
	return (0);
}
