#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: a pointer to a pointer to a linked list
 * @n: holds the data
 * Return: a pointer 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
