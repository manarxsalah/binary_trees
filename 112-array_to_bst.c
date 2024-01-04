#include "binary_trees.h"

/**
 * array_to_bst - builds Binary Search Tree from an array
 * @array: ptr to first element of the array to be converted
 * @size: no. of elements in the array
 * Return: ptr to root node of the created BST, NULL (fail)
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
