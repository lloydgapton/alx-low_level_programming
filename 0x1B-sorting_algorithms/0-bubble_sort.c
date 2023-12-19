#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function that sorts an array
 * of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size == 0 || size == 1)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
