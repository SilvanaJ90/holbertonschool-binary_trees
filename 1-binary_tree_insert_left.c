#include "binary_trees.h"

/**
 * binary_tree_insert_left - check code
 * @parent: pointer to the node to insert the left-childin
 * @value: value to store in the new node
 * Return: pointer to newNode or NULL on failure
 */

/* elementos menores a la raiz van al lado izq */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL, *newNode = binary_tree_node(parent, value);

	if (tree == NULL)
	{
		tree = newNode;
		return (NULL);
	}
	else
	{
		int root = tree->n;

		if (value < root && parent != NULL)
		{
			binary_tree_insert_left(tree->left, value);
		}
		else {
			return (NULL);
		}
	}
	return (newNode);
}
