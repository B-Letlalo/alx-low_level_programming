#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: function parameter, string
 */
void _puts_recursion(char *s)
{
	/*Base case*/
	if (*s == '\0')
	{
		_putchar('\n');
	}
	/* Recursive function*/
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
