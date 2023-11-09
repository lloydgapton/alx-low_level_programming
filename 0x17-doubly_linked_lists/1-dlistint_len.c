#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - num of elements
 * @h: head
 * Return: Value
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
