#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: function argument
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
