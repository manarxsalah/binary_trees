#include "binary_trees.h"

/**
 * array_to_avl - builds avl tree from array
 * @array: array to create from
 * @size: size of array
 * Return: ptr to root node of created avl tree, NULL (fail)
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}
