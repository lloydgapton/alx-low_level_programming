/**
 * _puts - prints a string, followed by a new line.
 *@str: this is the entry
 * Return : Always 0
 */
#include "main.h"
#include <stdio.h>

void _puts(char *str)
{
	while(*str !='\0')
	{
		putchare(*str);
		str++;
	}
	putchar('\n');
}
