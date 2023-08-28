/**
 * _memset - fills memory with a constant byte
 * @s:this is the output and the return
 * @b:this is the input string.
 * @n:this is the number of bytes.
 * Return: A pointer to the memory area s.
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
