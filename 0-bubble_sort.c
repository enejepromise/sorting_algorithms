#include "sort.h"

void bubble_sort(int *array, size_t size)
{
  size_t index = 0, index_of_swap = 0;
  int temp;
 
  for (; index < size - 1; index++)
    {
      for (index_of_swap = 0; index_of_swap < size - index - 1; index_of_swap++)
	{
	  if (array[index_of_swap] > array[index_of_swap + 1])
	    {
	      temp = array[index_of_swap];
	      array[index_of_swap] = array[index_of_swap + 1];
	      array[index_of_swap + 1] = temp;
	      /**Code goes here**/
	    }
	}
    }
}
