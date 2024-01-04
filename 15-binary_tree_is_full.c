#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: ptr to root node of tree to check
 * Return: 1 if tree is full
 *         0 if tree is not full
 *         0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == 0)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
