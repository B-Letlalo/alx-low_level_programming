#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: function parameter
 * Return: returns integer converted
 */
int _atoi(char *s)
{
	unsigned int counter = 0, size = 0, oi = 0, pn = 1, n = 1, i;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
		{
			break;
		}
		if (*(s + counter) == '-')
		{
			pn *= -1;
		}
		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
			{
				n *= 10;
			}
			size++;
		}
		counter++;
	}
	for (i = counter - size; i < counter; i++)
	{
		oi = oi + ((*(s + 1) - 48) * n);
		n /= 10;
	}
	return	(oi * pn);
}

