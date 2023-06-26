#include "sort.h"
/**
  * quick_sort - A quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort(array, 0, size - 1, size);
}

/**
  * sort - A recursive sorting algorithm
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full size of array
  */
void sort(int *arr, int left, int right, size_t size)
{
	int q;

	if (left < right)
	{
		q = split(arr, left, right, size);
		sort(arr, left, q - 1, size);
		sort(arr, q + 1, right, size);
	}
}

/**
  * split - split array
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full array size
  * Return: pivot index
  */
int split(int *arr, int left, int right, size_t size)
{
	int n, n2, pivot, tmp;

	pivot = arr[right];
	n = left;

	for (n2 = left; n2 < right; n2++)
	{
		if (arr[n2] < pivot)
		{
			if (n != n2)
			{
				tmp = arr[n2];
				arr[n2] = arr[n];
				arr[n] = tmp;
				print_array(arr, size);
			}
			n++;
		}
	}
	if (arr[n] != arr[right])
	{
		tmp = arr[n];
		arr[n] = arr[right];
		arr[right] = tmp;
		print_array(arr, size);
	}

	return (n);
}
