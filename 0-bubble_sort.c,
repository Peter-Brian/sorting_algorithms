#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array of int to sort
 * @size: size of the array
 * Return: Nothing void
 */

void bubble_sort(int *array, size_t size)
{
	size_t cloop, cloop2;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (cloop2 = 1; cloop2 <= size; cloop2++)
	{
		for (cloop = 0; cloop < size - 1; cloop++)
		{
			if (array[cloop] > array[cloop + 1])
			{
				tmp = array[cloop];
				array[cloop] = array[cloop + 1];
				array[cloop + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
