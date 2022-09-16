#include "binary_trees.h"

/**
 * binary_tree_size - check code
 * @tree: ointer to the root node of the tree to measure the size
 * Return: size or 0 if failure
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
