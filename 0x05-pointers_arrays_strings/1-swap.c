/**
 * swap_int - swaps the value of two integers.
 * @a:this is the first entry
 * @b:this is the second entry
 * Return: always 0
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
