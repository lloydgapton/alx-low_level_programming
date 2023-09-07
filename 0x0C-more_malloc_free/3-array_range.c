#include "main.h"
/**
 * array_range - function that creates an array of integers.
 *
 *
 * @min: This is the range min to allocate in the memory
 * @max: This is my range max to allocate in the memory
 *
 * Return: The pointer to the newly created array
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}
