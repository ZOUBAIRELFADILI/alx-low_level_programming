#include "function_pointers.h"
/**
 * array_iterratior - executes a function on each element of an array
 * @array: array to iterate through
 * @size: size of the array
 * @action: function pointer that takes an int as argument and returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
