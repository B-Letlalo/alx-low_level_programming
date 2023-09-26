#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: function parameter
 * Return: returns absolute value
 */
int _abs(int i)
{
	int answer;
	/*when i is a negative number, make it a positive value*/
	if (i < 0)
	{
		answer = i * -1;
		return	(answer);
	}
	/*if i is positive, it remains the same*/
	else
	{
		answer = i;
		return	(answer);
	}
}
