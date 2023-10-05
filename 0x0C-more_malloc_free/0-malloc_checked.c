#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  allocates memory using malloc
 * @b: function parameter, unsigned int
 * Return: pointer or a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	else
	{
		return	(memory);
	}
}
