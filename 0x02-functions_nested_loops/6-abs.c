#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: function parameter
 * Return: returns absolute value
 */
int _abs(int i)
{
	/*when i is a negative value, turns it to a positive*/
	if (i < 0)
	{
		i = i * -1;
	}
	/*when i is positive, it remains as is*/
	else
	{
		i = i;
	}
	return	(i);
}
