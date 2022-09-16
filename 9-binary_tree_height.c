#include "binary_trees.h"
#include <sys/param.h>

/**
 * binary_tree_height - check code
 * @tree: pointer to the root node of the tree to measure the height
 * Return: always 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int lDepth = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		int rDepth = tree->right ? binary_tree_height(tree->right) + 1 : 0;

		return (MAX(lDepth, rDepth));
	}
	return (0);
}
