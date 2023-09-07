#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: This is the length to allocate in the memory
 * @size: This is the size of casting to save
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
		ptr[i] = 0;
	return (ptr);
}
