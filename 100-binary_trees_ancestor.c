#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: ptr to first node to find the ancestor
 * @second: ptr to second node to find the ancestor
 * Return: ptr to the ancestor node, NULL if there's no ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (first == 0 || second == 0)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - measures depth of a node in binary tree
 * @tree: node to calculate the depth of it
 * Return: depth of node, 0 if tree is NULL
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
