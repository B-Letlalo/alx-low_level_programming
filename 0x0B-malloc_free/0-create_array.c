#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: function parameter, unsigned int
 * @c: function parameter, char
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return	(NULL);
	}
	else
	{
		char *pt_array = (char *) malloc(size * sizeof(char));

		if (pt_array == NULL)
		{
			return	(NULL);
		}
		for (i = 0; i < size; i++)
		{
			pt_array[i] = c;
		}
		return  (pt_array);
	}
}
