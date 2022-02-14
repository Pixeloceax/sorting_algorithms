#include "sort.h"
/**
 *quick_sort - quick sort
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	sort(array, 0, size - 1, size);
}

/**
 *Lomuto_partition_scheme - This function takes last element as pivot, places
 *the pivot element at its correct position in sorted array,
 *and places all smaller to left of pivot and all
 *greater elements to right of pivot
 * @array: array
 * @low: starting index
 * @high: ending index
 * @size: size of array
 * Return: int
 */
int Lomuto_partition_scheme(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int a = low - 1;
	int b;

	for (b = low; b <= high - 1; b++)
	{
		if (array[b] < pivot)
		{
			a++;
			swap(&array[a], &array[b]);
			if (a != b)
			{
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[a + 1])
	{
		swap(&array[a + 1], &array[high]);
		print_array(array, size);
	}
	return (a + 1);
}

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
 *sort - sorts an array of integers in ascending order
 * @array: array
 * @low: starting index
 * @high: neding index
 * @size: size of array
 */
void sort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = Lomuto_partition_scheme(array, low, high, size);

		sort(array, low, i - 1, size);
		sort(array, i + 1, high, size);
	}

}
