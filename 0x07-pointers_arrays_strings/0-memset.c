/**
 * _memset - fills memory with a constant byte
 * Return:Always 0
 */

#include "main.h"
#include <stdsef.h>

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; I++)
	{
		s[i] = b;
	}
	return (s);
}
