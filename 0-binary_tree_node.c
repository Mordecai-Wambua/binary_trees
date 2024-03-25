#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to put in the new node
 * Return: a pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
