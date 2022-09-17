#include "binary_trees.h"
#include <math.h>
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
 * binary_tree_is_leaf - check code
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if  (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - check code
 * @tree: pointer to the root node of the tree to check
 * Return: ---
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
