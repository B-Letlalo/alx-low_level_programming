#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: function parameter
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (n--; n >= 0; n--)
	{
		_putchar(s[n]);
		_putchar('\n');
	}
}
