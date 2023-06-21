#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as
 * parameter on each element of the array.
 * @array: array.
 * @size: size of an array.
 * @action: function pointer.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
