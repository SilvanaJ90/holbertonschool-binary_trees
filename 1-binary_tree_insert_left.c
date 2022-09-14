#include "binary_trees.h"

/**
 * binary_tree_insert_left - check code
 * @parent: pointer to the node to insert the left-childin
 * @value: value to store in the new node
 * Return: pointer to newNode or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodeLef = NULL;
	return (newNodeLef);


		binary_tree_t *newNode = NULL, *p, *q;

	if (parent == NULL)
	{
		parent = create_node();
		parent->n = value;
		return (NULL);
	}
	p = parent;
	while (p != NULL)
	{
		q = p;
		if (value < p->n)
			p = p->left;
		else
			p = p->right;
	}
	p = newNode;
	p->n = value;
	if (value < q->n)
		q->left = p;
	else
		q->right = p;
	return (NULL);

}
