#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: ptr to root node of tree to delete
 * Description: if tree is NULL, do nothing
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == 0)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
