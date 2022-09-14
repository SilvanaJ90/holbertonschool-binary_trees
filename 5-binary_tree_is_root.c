#include "binary_trees.h"

/**
 * binary_tree_is_root - check code
 * @node: pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL)
		return (0);
	if (node->left != parent && node->right != parent )
		return (1);
	return (0);
}
