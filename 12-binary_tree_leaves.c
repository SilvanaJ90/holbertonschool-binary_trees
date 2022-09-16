#include "binary_trees.h"

/**
 * binary_tree_leaves - check code
 * @tree: ointer to the root node of the tree to count the number of leaves
 * Return: lLeaves + rLeaves or 0 failure
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
	{
		int lLeaves = binary_tree_leaves(tree->left);
		int rLeaves = binary_tree_leaves(tree->right);

		return (lLeaves + rLeaves);
	}
}
