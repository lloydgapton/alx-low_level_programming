/**
 *reset_to_98 - updates the value it points to as 98.
 *
 *Return: Always 0.
 */
#include "main.h"

void reset_to_98(int *n)
{
	*n = 98;
}

int main()
{
	int num = 5;

	reset_to_98(&num);

	return 0;
}
