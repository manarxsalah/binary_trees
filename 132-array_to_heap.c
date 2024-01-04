#include "binary_trees.h"

/**
 * array_to_heap - builds Max Binary Heap tree from array
 * @array: ptr to first element of array to be converted
 * @size: no. of element in array
 * Return: ptr to root node of created Binary Heap, NULL (fail)
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
