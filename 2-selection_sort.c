#include "sort.h"
/**
 *selection_sort - performs selection sort
 *@array: array to sort
 *@size: size of array
 *Return: void
 **/


void selection_sort(int *array, size_t size)
{
	size_t index, index1, leastN;
	int temp;

	for (index = 0; index < size - 1; index++)
	{
		leastN = index;
		for (index1 = index + 1; index1 < size; index1++)
		{
			if (array[index1] < array[leastN])
			{
				leastN = index1;
			}
		}
		if (leastN != index)
		{
			temp = array[index];
			array[index] = array[leastN];
			array[leastN] = temp;
			print_array(array, size);
		}
	}
}
