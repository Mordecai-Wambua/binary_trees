#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast 1 child
 * @tree: pointer to root node of tree
 *
 * Return: 0 if tree is NULL else counts
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counts = 0;

	if (tree != NULL)
	{
		counts += (tree->right != NULL || tree->left != NULL) ? 1 : 0;
		counts += binary_tree_nodes(tree->left);
		counts += binary_tree_nodes(tree->right);
	}
	return (counts);
}
