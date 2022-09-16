#include "binary_trees.h"

/**
 * binary_tree_height - check code
 * @tree: pointer to the root node of the tree to measure the height
 * Return: always 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lDepth;
	int rDepth;

	if (tree == NULL)
		return (-1);

	if (tree)
	{
		lDepth = binary_tree_height(tree->left);
		rDepth = binary_tree_height(tree->right);
		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
	return (0);
}
