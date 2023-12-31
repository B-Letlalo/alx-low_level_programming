#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: function parameter
 * @index: given index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
