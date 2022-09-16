#include "binary_trees.h"
#include <sys/param.h>

/**
 * binary_tree_height - check code
 * @tree: pointer to the root node of the tree to measure the height
 * Return: always 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lDepth = 0;
	int rDepth = 0;

	if (tree == NULL)
		return (-1);

	lDepth = binary_tree_height(tree->left);
	rDepth = binary_tree_height(tree->right);
	return (MAX(1 + lDepth, 1 + rDepth));
	return (0);
}
