#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: ptr to node to insert right-child in
 * @value: value to store new node
 * Description: if parent already has right-child, new node must take its place
 * old right-child must be set as right-child of new node
 * Return: ptr to created node, or NULL (fail)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == 0)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == 0)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
