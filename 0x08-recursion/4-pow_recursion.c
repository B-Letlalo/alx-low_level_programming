#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int base
 * @y: int power
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
	{
		return	(-1);
	}
	else
	{
		answer *= x;
		_pow_recursion(x, y - 1);
		return	(answer);
	}
}
