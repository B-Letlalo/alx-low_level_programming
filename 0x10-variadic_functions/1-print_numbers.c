#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: function parameter, char
 * @n: function parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
	{
		printf("%s", separator);
	}
	else
	{
		for (; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d", va_arg(numbers, int));
			}
			else
			{
				printf("%d", va_arg(numbers, int));
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(numbers);
}
