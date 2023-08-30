#include "main.h"
/**
 * _strlen_recursion -returns the length of a string.
 * @s:this is the input entry
 * Return: Result is the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strelen_recursion(s + 1) + 1);
}
