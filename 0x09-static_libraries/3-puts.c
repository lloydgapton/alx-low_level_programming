#include "main.h"
/**
 * _puts - this is the function.
 * @str: this is an entry
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
