#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: function parameter, char
 * @n: function parameter, integer (unsigned)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list strings;

	va_start(strings, n);

	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (; i < n; i++)
		const char *str = va_arg(strings, const char *);
		{
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(strings, char *));
				printf("%s", separator);
			}
			if (i < (n - 1) && separartor != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(strings);
}
