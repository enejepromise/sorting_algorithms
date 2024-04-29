#include "sort.h"
/**
 * bubble_sort - This is used to swap two integers in an array of elements.
 * @array: This is an array of integers to be sort
 * @size: Size or lenght of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t index = 0, index_of_swap = 0;
	int temp;

	if (array)
	for (; index < size - 1; index++)
	{
		for (index_of_swap = 0; index_of_swap < size - index - 1; index_of_swap++)
		{
			if (array[index_of_swap] > array[index_of_swap + 1])
			{
				temp = array[index_of_swap];
				array[index_of_swap] = array[index_of_swap + 1];
				array[index_of_swap + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
