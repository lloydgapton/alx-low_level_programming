#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints element
 * @h: head
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
	printf("%i\n", h->n);
			h = h->next;
			i++;
	}
	return (i);
}
