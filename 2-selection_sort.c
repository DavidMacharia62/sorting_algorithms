#include "sort.h"

/**
 * selection_sort - function to int array using selection sort 
 * algorithm
 * 
 * @array: pointer to the array to sort
 * @size: size of the array to sort
 * return - void
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t n, m, min_index;

	for (n = 0; n < size - 1; n++)
	{
		min_index = n;
		for (m = n + 1; m < size; m++)
		{
			if (array[m] < array[min_index])
			{
				min_index = m;
			}
		}
		if (min_index != n)
		{
			temp = array[min_index];
			array[min_index] = array[n];
			array[n] = temp;
			print_array(array, size);
		}
	}
}
