#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: ptr to node to find uncle
 * Return: ptr to uncle node
 *         NULL if node is NULL
 *         NULL if parent is NULL
 *         NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds siblings of node
 * @node: ptr to node to find siblings
 * Return: ptr to sibling node
 *         NULL if node is NULL
 *         NULL if parent is NULL
 *         NULL if node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
