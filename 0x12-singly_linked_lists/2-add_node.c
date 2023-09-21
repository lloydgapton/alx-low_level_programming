#include "lists.h"
#include <stdlib.h>
/**
 * _strlen -gets length of string
 * @s:string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (x = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node - add new nodes
 * @head:current place in the list
 * @str: string to add to the head
 * Return: pointer to current position
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		content[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
