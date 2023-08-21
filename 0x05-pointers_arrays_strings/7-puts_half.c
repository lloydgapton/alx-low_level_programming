/**
 * puts_half - prints half of a string
 * @str: this ais an entry
 * Return Always 0
 */

#include "main.h"
#include <string.h>

void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;

	if (length % 2 == 0)
	{
		start_index =length / 2;
	}

	while (str[start_index] != '\0')
	{
		putchar(str[start_indxe]);
		start_index++;
	}

	putchar('\n');
}
