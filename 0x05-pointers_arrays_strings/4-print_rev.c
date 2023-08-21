/**
 * print_rev - prints a string in reverse.
 * @s: this is the entry
 * Return : Always 0
 */

#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (length = length - 1; s[length] != '\0'; length--)
	{
		putchar(s[length]);
	}

	putchar('\n');
}
