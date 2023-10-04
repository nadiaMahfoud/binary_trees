#include "binary_trees.h"
/**
 * binary_tree_nodes -a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to
 * count the number of nodes
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
