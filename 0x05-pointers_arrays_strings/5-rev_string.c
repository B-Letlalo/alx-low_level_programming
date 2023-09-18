#include "main.h"
/**
 * rev_string - reverses a string
 * @s: function parameter
 */
void rev_string(char *s)
{
	int n, length;
	char temp;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (n = 0; n < length / 2; n++)
	{
		temp = s[n];
		s[n] = s[length - n - 1];
		s[length - n - 1] = temp;
	}
}
