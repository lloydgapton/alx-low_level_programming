#include "search_algos.h"

int my_binary_search(int *array, size_t low, size_t high, int value);

/**
 * exponential_search - function that searches for a value in a sorted array of
 *                  integers using the Exponential search algorithm
 *
 * @array:  is a pointer to the first element of the array to search in
 * @size:   is the number of elements in array
 * @value:  is the value to search for
 *
 * Return:  Must return the index where value is located
 *          If value is not present in array or if array is NULL,
 *          your function must return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, high = size - 1, end;

	if (array == NULL)
		return (-1);
	while (i <= high && value >= array[i])
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i > (high))
		end = high;
	else
		end = i;
	printf("Value found between indexes [%zu] and [%li]\n", i / 2, end);

	if (i < high)
		high = i;

	return (my_binary_search(array, i / 2, high, value));
}

/**
 * my_binary_search - function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 *
 * @array:  is a pointer to the first element of the array to search in
 * @low :   Is the minimun index of the array
 * @high:   Is the maximum index of the array
 * @value:  is the value to search for
 *
 * Return:  Must return the index where value is located
 *          If value is not present in array or if array is NULL,
 *          your function must return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
