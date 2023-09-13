#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line
 * @n: function argument
 * Return: 0
 */
void print_to_98(int n)
{
	/*if less than 98, keep printing until you reach 98*/
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	/*if = 98, print just the number 98*/
	else if (n == 98)
	{
		printf("%d, ", n);
	}
	/*if bigger than 98, count down to 98*/
	else
	{
		for (n; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
}
