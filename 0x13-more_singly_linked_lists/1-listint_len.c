#include "lists.h"
/**
 * listint_len -prints length
 * @h: list
 * Return: The linked elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
