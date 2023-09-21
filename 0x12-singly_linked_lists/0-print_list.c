#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elemts of list
 * @h: pointer
 * Return:number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		e++;
	}
	return (e);
}
