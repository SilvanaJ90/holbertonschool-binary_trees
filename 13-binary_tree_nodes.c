#include "binary_trees.h"

/**
 * binary_tree_nodes - check code
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: count nodes the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}
