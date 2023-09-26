#include "lists.h"
/**
 * insert_nodeint_at_index - new node position
 * @head: head
 * @idx:index of the list
 * @n: integer
 * Return: nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev = NULL;
	int ct = idx;

	if (head == NULL)
		return (NULL);
	for (ptr = *head; ct && ptr != NULL; ct, ptr = ptr->next)
		prev = ptr;
	if (ct)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	if (prev != NULL)
	{
		ptr->next = prev->next;
		prev->next = ptr;
	}
	else
	{
		ptr->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	ptr-> = n;
	return (ptr);
}

