#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *pright;
	const binary_tree_t *pleft;
	int l, r;

	if (tree == NULL)
		return (0);
	r = 0;
	l = 0;
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
		l += 1;
	}
	while (pleft)
	{
		if (pleft->left == NULL)
			pleft = pleft->right;
		else if (pleft->right == NULL)
			pleft = pleft->left;
		else
			pleft = pleft->left;
		r += 1;
	}
	if (r == l)
		return (1);
	else
		return (0);
}
