#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: function parameter, string.
 * Return: length of a string
 */
int _strlen(char *s)
{
	int n;
	int counter = 0;

	for (; s[n] != '\0'; n++)
	{
		counter = counter + 1;
	}
	return	(counter);
}
