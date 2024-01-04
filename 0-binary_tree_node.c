#include "binary_trees.h"

/**
 * binary_tree_node - creates new binary tree node
 * @parent: ptr to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: ptr to the new node, or NULL (fail)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
