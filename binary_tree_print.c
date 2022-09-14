#include "binary_trees.h"

void print2DUtil(binary_tree_t *root, int space)
{
	int count = 0;

	if (root == NULL)
		return;
	space += count;
	print2DUtil(root->right, space);
	printf("\n");
	for (int i = count; i < space; i++)
		printf(" ");
	printf("%d\n", root->n);
	print2DUtil(root->left, space);
}

void binary_tree_print(binary_tree_t *root)
{
	print2DUtil(root, 0);
}
