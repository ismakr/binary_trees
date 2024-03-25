#include "binary_trees.h"
/**
 * binary_tree_node -  that creates a binary tree node
 * @parent: parent node
 * @value: node value
 * Return:  return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;
	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);
	if (parent == NULL)
	{
		new_n->parent = NULL;
		new_n->left = NULL;
		new_n->right = NULL;
		new_n->n = value;
	}
	else{
		new_n->parent= parent;
		new_n->left = NULL;
		new_n->right = NULL;
		new_n->n = value;
	}
	return (new_n);
}
