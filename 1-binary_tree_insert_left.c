#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: node parent
 * @value: node value
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = NULL;
	new_n->n = value;
	if (parent->left != NULL)
	{
		new_n->left = parent->left;
		parent->left->parent = new_n;
	}
	parent->left = new_n;
	return (new_n);
}
