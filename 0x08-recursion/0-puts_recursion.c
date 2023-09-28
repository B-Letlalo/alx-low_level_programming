#include "main.h"
#include "string.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: function parameter, string
 */
void _puts_recursion(char *s)
{
	/*Setting the counter*/
	int i = 0;

	/*Base case*/
	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	/* Recursive function*/
	else
	{
		_putchar(s[i]);
		_putchar(s[i + 1]);
	}
}
