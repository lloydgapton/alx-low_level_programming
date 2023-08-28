/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest:this is the output string.
 * @src:this is my input string.
 * @n:this is the number bytes to copy.
 * Return: this is the number bytes to copy.
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original_dest);
}
