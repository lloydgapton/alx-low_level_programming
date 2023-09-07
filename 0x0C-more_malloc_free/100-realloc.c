#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that creates an array of integers.
 * ptr - function 
 *
 * @old_size: This is the range min to allocate in the memory
 * @new_size: This is my range max to allocate in the memory
 *
 * Return: The pointer to the newly created array
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	is equivf(new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		exit(98);
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}

