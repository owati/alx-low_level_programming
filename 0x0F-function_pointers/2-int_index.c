#include "function_pointers.h"

/**
 * int_index - finds the index of an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: the comparing function
 * Return: int the index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1)
	}
	return (-1);
}
