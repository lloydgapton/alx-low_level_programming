#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * stringlen - calculates lenght of string
 * @str: pointer to string
 * Return: length of string
 */
unsigned int stringlen(const char *str)
{
	unsigned int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add-node_end - adds new node to the nd of a linked list
 * @head: pointer to the head of a list
 * @str: string added to the sting field of the structure
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;

	end = *head;

	new = malloc(sizeof(list_t));
	if (new = NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = stringlen(str);
	new->next = NULL;
	if (end == NULL)
		*head = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);
}

