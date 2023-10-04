#include "binary_trees.h"

/**
 * binary_tree_height_b -it Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t lt = 0;
	size_t rt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lt = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			rt = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((lt > rt) ? lt : rt);
	}
}

/**
 * binary_tree_balance -it Measures balance factor of a binary tree
 * @tree:is a pointer to the root node of the tree to measure the balance fact
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
