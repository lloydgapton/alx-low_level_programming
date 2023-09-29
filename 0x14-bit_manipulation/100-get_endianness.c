#include "main.h"
/**
 * get_endianess - returns endianness
 * Return: 1 for small endians, 0 for big ones
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
