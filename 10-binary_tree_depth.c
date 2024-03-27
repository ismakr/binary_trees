#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a binary tree
 * @tree: tree
 * Return: n depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *ptr;
	size_t n;

	if (tree == NULL)
		return (0);
	n = 0;
	ptr = tree;
	while (ptr->parent)
	{
		ptr = ptr->parent;
		n += 1;
	}
	return (n);
}
