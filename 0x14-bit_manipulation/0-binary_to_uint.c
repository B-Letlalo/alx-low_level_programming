#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number input
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = (result << 1) + (b[i] - '0');
	}

	return (result);
}
