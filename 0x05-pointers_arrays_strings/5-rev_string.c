#include "main.h"
/**
 * rev_string - reverses a string
 * @s: function parameter
 */
void rev_string(char *s)
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
	}
}
