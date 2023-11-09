#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - get node
 *@head: head
 *@index: index
 *Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	dlistint_t *temporal = head;

	if (head == NULL)
		return (NULL);

	while (temporal != NULL)
	{
		nodes++;
		if (nodes - 1 == index)
			return (temporal);
		temporal = temporal->next;
	}
	return (NULL);
}
