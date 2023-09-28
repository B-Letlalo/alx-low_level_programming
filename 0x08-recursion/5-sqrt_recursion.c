#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer parameter
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return	(-1);
	}
	else if (n == 1)
	{
		return	(n);
	}
	else if (n == 0)
	{
		return	(n);
	}
	else
	{
		return	(get_sqrt(n, 1));
	}
}
/**
 * get_sqrt - recursive function to find square root
 * @n: base number
 * @random: current random number
 * Return: square root of n
 */
int get_sqrt(int n, int random)
{
	int random_again = (random + n / random) / 2;

	if (random_again == random || random_again > random)
	{
		return	(random);
	}
	else
	{
		return	(get_sqrt(n, random_again));
	}
}
