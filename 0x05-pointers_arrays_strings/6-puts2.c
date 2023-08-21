/**
 * puts2 -prints every other character of a string, starting with first character.
 * @str: this is an entry
 * Return :Always 0
 */

#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
