#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: pointer to root node of the tree
 *
 * Return: 0 if tree is NULL or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		number += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
		number +=  binary_tree_leaves(tree->left);
		number +=  binary_tree_leaves(tree->right);
	}
	return (number);
}
