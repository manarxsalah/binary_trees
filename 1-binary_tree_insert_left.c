#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts node as the left-child of another node
 * @parent: ptr to the node to insert the left-child in
 * @value: value to store in the new node
 * Description - if parent already has a left-child, new node must
 * take its place, old left-child must be set as left-child of the new node
 * Return: ptr to the created node, or NULL (fail) or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == 0)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == 0)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
