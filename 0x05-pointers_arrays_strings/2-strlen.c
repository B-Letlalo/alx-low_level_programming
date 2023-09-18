#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: function parameter, string.
 * Return: length of a string
 */
int _strlen(char *s)
{
	long int str_length = sizeof(*s);

	if (str_length < 1)
	{
		return	(0);
	}
	else
	{
	return	(str_length);
	}
}
