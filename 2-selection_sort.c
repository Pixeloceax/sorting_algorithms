#include "sort.h"
/**
 *swap - function
 *@xp: V
 *@yp: V
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - function
 *@array: V
 *@size: V
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
