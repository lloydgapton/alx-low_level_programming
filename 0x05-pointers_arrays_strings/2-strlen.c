/**
 * int_strlen - prints the length of a string.
 * Return: 0.
 */

#include "main.h"
#include <string.h>
int _strlen(char *s)
{
	int length = 0;

	while(*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
