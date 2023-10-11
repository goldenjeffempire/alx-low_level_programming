#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - Seaches for an integer in an array
  * @array: The array to search in
  * @size: The number of elements in the array
  * @cmp: The comparison function to use
  * Return: The index of the first element that matches the comparison function
  * or -1 if no element matches or if size is <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
