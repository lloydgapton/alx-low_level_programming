#include "main.h"
/**
 * _pow_recursion -returns the valiue of x raised to the power of y.
 * @x: this is the input number.
 * @y: This is the power number.
 * Return: if "y" is bigger than zero raised to the power of "y",
 * return - if "y" is lower than zero, return 1 if "y" is equal to 1,
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
