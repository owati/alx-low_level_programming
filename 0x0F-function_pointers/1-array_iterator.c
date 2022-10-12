#include "function_pointers.h"

/**
 * array_iterator - the array the iterator
 * @array: the array to edit
 * @size: the size of the array
 * @action: the action to be taken
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (--size < 0)
		action(array[size]);
}

