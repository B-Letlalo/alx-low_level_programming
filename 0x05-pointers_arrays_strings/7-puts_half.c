#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: function parameter
 */
void puts_half(char *str)
{
	int length = 0;
	int halve, n;

	while (str[length] != '\n')
	{
		length++;
	}
	/*gets half of string*/
	halve = (length - 1) / 2;
	/* prints half of string*/
	for (n = (halve + 1); n < length; n++)
	{
		_putchar(str[n]);
	}
	/* new line */
	_putchar('\n');
}
