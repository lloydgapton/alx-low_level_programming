#include "search_algos.h"

/**
* linear_search - searches for a value in array of int using linear search algo
* @array: array to search
* @size: size of array
* @value: value to search for
* Return: index of value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
