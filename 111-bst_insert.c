#include "binary_trees.h"
/**
 * bst_insert -it inserts nodes in order to create a BST tree
 * @tree:  is a double pointer to the root node of the BST
 * to insert the value
 * @value:  is the value to store in the node to be inserted
 * Return: BST tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *temp;
	binary_tree_t *aux;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		aux = binary_tree_node((binary_tree_t *)(*tree), value);
		new = (bst_t *)aux;
		*tree = new;
	}
	else
	{
		temp = *tree;
		if (value < temp->n)
		{
			if (temp->left)
				new = bst_insert(&temp->left, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->left = (bst_t *)aux;
			}
		}
		else if (value > temp->n)
		{
			if (temp->right)
				new = bst_insert(&temp->right, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->right = aux;
			}
		}
		else
			return (NULL);
	}
	return (new);
}
