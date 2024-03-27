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
		return (0);
	n = 0;
	ptr = tree;
	while (ptr->left || ptr->right)
	{
		if (ptr->left == NULL)
			ptr = ptr->right;
		else if (ptr->right == NULL)
			ptr = ptr->left;
		else
			ptr = ptr->left;
		n += 1;
	}
	return (n);
}
