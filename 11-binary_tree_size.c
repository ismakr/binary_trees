#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree
 * Return: n size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *pright;
	const binary_tree_t *pleft;
	size_t n;

	if (tree == NULL)
		return (0);
	n = 1;
	pright = tree->right;
	pleft = tree->left;
	while (pright)
	{
		if (pright->right == NULL)
			pright = pright->left;
		else if (pright->left == NULL)
			pright = pright->right;
		else
			pright = pright->right;
		n += 1;
	}
	while (pleft)
	{
		if (pleft->left == NULL)
			pleft = pleft->right;
		else if (pleft->right == NULL)
			pleft = pleft->left;
		else
			pleft = pleft->left;
		n += 1;
	}
	return (n);
}
