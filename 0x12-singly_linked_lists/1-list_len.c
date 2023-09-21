#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len -returns the number of nodes
 * @h:linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h; x++)
		h = h->next;
	return (x);
}
