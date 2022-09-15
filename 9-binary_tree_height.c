#include "binary_trees.h"

/**
 * binary_tree_height - check code
 * @tree: pointer to the root node of the tree to measure the height
 * Return: always 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int lDepth = binary_tree_height(tree->left);
		int rDepth = binary_tree_height(tree->right);

		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
	return (-1);
}
