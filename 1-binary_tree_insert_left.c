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
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		parent = newNode;
		return (NULL);
	}
	else
	{
		int root = parent->n;

		if (value < root && parent->left != NULL)
		{
			binary_tree_insert_left(parent->left, value);
			newNode->left = parent->left;
			parent->left->parent = newNode;
		}
	}
	parent->left = newNode;
	return (newNode);
}
