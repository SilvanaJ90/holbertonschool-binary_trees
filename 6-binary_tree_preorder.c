#include "binary_trees.h"

/**
 * binary_tree_preorder - check code
 * @tree: pointer to the root node of the tree to traverse
 * @func: ointer to a function to call for each node
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
}
