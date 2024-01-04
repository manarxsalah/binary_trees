#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if binary tree is valid BST
 * @tree: ptr to root node of the tree to check
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == 0)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - checks if binary tree is valid BST
 * @tree: ptr to root node of the tree to check
 * @min: lower bound of checked nodes
 * @max: upper bound of checked nodes
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == 0)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
}
