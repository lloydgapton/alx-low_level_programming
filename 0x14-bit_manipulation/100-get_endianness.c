#include "main.h"
/**
 * get_endianness - returns endianness
 * Return: 1 for small endians, 0 for big ones
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
