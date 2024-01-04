#include "binary_trees.h"

/**
 * bst_insert - inserts value in a BST
 * @tree: double ptr to root node of the BST to insert value
 * @value: value to store in the node to be inserted
 * Return: ptr to created node, NULL (fail)
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL;
	bst_t *second = NULL;
	bst_t *new = NULL;

	if (tree == 0)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	tmp = *tree;
	while (tmp)
	{
		second = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}

	new = binary_tree_node(NULL, value);
	if (second == NULL)
		second = new;
	else if (value < second->n)
	{
		second->left = new;
		new->parent = second;
	}
	else
	{
		second->right = new;
		new->parent = second;
	}

	return (new);
}
