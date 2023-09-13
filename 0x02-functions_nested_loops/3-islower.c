#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 0 if not lowercase, 1 if it is
 * @c: parameter/function argument
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return	(1);
	}
	else
	{
		return	(0);
	}
}
