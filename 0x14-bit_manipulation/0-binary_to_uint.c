#include "main.h"
/**
 * binary_to_unit - binary to int
 * @b: binary
 * Return: number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int bit = 0;
	while (b && *b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bit = bit << 1;
		bit = bit | (*b - '0');
		b++;
	}
	return (bit);
}
