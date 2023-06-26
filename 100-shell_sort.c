#include "sort.h"
/**
 * shell_sort - Shell sort - Knuth Sequence
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	int gap = 1, n, m, tmp;

	while (gap < ((int)(size)))
		gap = (3 * gap) + 1;
	for (gap = (gap - 1) / 3; gap > 0; gap = (gap - 1) / 3)
	{
		for (n = gap; n < (int)size; n += 1)
		{
			tmp = array[n];

			for (m = n; m >= gap && array[m - gap] > tmp; m -= gap)
				array[m] = array[m - gap];

			array[m] = tmp;
		}
		print_array(array, size);
	}
}
