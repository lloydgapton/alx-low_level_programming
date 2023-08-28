/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: this is the input string.
 * @accept:this is the string to locate.
 * Return:Returns a pointer to the byte in s that matches one of the bytes
 * accept, or NULL if no such byte is found
 */
#include"main.h"

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
