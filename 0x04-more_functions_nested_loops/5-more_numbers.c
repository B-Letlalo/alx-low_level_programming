#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, with new line
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	for (; i < 10; i++)
	{
		j = 0;

		for (; j < 15; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
	}
}
