#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int l;
	int r;

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (l + 1);
}
