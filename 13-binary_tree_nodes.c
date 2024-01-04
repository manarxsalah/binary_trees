#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: tree to count nodes from
 * Return: no. of nodes counted, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - measures size of binary tree
 * @tree: tree to measure size of
 * Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == 0)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 * Return: no. of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == 0)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
