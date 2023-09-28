#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer, char
 */
void _print_rev_recursion(char *s)
{
	/* Base case*/
	if (*s != '\0')
	{
		return;
	}
	/* Recursive function*/
	else
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
