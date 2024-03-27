#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: tree
 * Return: n hieght
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *ptr;
	size_t n;

	if (tree == NULL)
		return (NULL);
	n = -1;
	ptr = tree;
	while (ptr)
	{
		if (ptr->right == NULL)
			ptr = ptr->left;
		else if (ptr->left == NULL)
			ptr = ptr->right;
		else
			ptr = ptr->left;
		n += 1;
	}
	return (n);
}
