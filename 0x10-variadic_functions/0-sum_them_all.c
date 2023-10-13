#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: function parameter, const
 * Return: 0 if n is 0
 * and sum of all arguments if otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;

	va_list sum_num;

	va_start(sum_num, n);

	if (n == 0)
	{
		return	(0);
	}
	else
	{
		for (; i < n; i++)
		{
			result += va_arg(sum_num, int);
		}
		return	(result);
	}
}
