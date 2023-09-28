#include "main.h"
/**
 * factorial -  returns the factorial of a given number
 * Return: factorial of n
 * @n: integer parameter
 */
int factorial(int n)
{
	int answer;

	if (n < 0)
	{
		return	(-1);
	}
	else if (n == 0)
	{
		return	(1);
	}
	else
	{
		answer = n * factorial(n - 1);
		return	(answer);
	}
}
