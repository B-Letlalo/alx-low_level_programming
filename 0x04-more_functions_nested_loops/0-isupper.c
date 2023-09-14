#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: function parameter
 * Return: 0 if lowercase and 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return	(1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return	(0);
	}
}
