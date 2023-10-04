#include "binary_trees.h"
/**
 * binary_tree_delete -it  frees an entire tree using recursion
 * it frees the node
 * when the node left and right are NULL
 * @tree:  is a pointer to the root node of the tree to delete
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
