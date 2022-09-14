#include "binary_trees.h"

/* Còdigo tomado http://stackoverflow.com/a/13755911/5184480 */


/**
 * print_t - check code
 * @root: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 * Return: length of printed tree after process
 */

static int print_t(const binary_tree_t *root, int offset, int depth, char **s)
{
	char b[6];
	int width, left, right, is_left, i;

	if (!root)
		return (0);
	is_left = (root->parent && root->parent->left == root);
	width = sprintf(b, "(%03d)", root->n);
	left = print_t(root->left, offset, depth + 1, s);
	right = print_t(root->right, offset + left + width, depth + 1, s);
	for (i = 0; i < width; i++)
		s[depth][offset + left + i] = b[i];
	if (depth && is_left)
	{
		for (i = 0; i < width + right; i++)
			s[depth - 1][offset + left + width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !is_left)
	{
		for (i = 0; i < left + width; i++)
			s[depth - 1][offset - width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}

/**
 * _height - check code
 * @root: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */

static size_t _height(const binary_tree_t *root)
{
	size_t height_l;
	size_t height_r;

	height_l = root->left ? 1 + _height(root->left) : 0;
	height_r = root->right ? 1 + _height(root->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_print - check code
 * @root: Pointer to the root
 */

void binary_tree_print(const binary_tree_t *root)
{
	char **s;
	size_t height, i, j;

	if (!root)
		return;
	height = _height(root);
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	for (i = 0; i < height + 1; i++)
	{
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		memset(s[i], 32, 255);
	}
	print_t(root, 0, 0, s);
	for (i = 0; i < height + 1; i++)
	{
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s);
}
