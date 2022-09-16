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


/**
 * binary_tree_balance - check code
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: always 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lh = binary_tree_height(tree->left);
		size_t rh =  binary_tree_height(tree->right);

		return (lh - rh);
	}
	return (0);
}

