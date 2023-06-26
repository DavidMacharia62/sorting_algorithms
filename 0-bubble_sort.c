#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function that sorts numbers
 *
 * @array: pointer to array that contains nums to be sorted
 * @size: size of the array passed to the function
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, m;
	int temp;

	if (array == NULL)
		return;

	for (n = 0; n < size - 1; n++)
	{
		for (m = 0; m < size - n - 1; m++)
		{
			/*Compare two elements and swap then print array*/
			if (array[m] > array[m + 1])
			{
				temp = array[m];
				array[m] = array[m + 1];
				array[m + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
