#include "sort.h"

/**
 *swap - swap two elements
 *@a: a value
 *@b: b value
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - selection sort
 *@array: array
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, index;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		swap(&array[index], &array[i]);
		print_array(array, size);
	}
}
