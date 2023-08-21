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

	length = 0;

	while (str[start_index] != '\0')
	{
		length++;
	}
	start_index = length / 2;

	if (length % 2 == 1)
		start_index++;

	while(start_index < length)
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
