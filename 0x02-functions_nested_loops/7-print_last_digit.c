#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: last digit of a number
 * @i: Function argument
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	/*if last digit is a negative number, turns it into a positive number*/
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	/*if last digit is positive, leave as is*/
	else
	{
		last_digit = last_digit;
	}
	_putchar(last_digit + '0');
	return	(last_digit);
}
