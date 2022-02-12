#include "sort.h"
/**
 *bubble_sort - bubble sort
 *@array: array
 *@size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t tmp, i, j;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
