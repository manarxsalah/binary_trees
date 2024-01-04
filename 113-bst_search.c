#include "binary_trees.h"

/**
 * bst_search - searches for value in a BST
 * @tree: ptr to root node of the BST to search
 * @value: value to search in the tree
 * Return: ptr to the node containing an int equal to 'value'
 *         NULL if tree is NULL
 *         NULL if no match is found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}
