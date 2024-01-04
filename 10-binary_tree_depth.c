#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in binary tree
 * @tree: node to calculate the depth of it
 * Return: depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == 0)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
