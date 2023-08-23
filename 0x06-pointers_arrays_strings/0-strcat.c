/**
 * _strcat - conactenates two strings
 * _putchar - prints values
 * @dest :this is the first entry.
 * @src :this is the second entry
 * Return:dest
 */

#include <unistd.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}

void _putchar(char c)
{
	write(1, &c, 1);
}

void_puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
