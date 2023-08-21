/**
 * puts2 -prints every other character of a string.
 * @str: this is an entry
 * Return :Always 0
 */

#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	{
		if (a % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
