#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_name - prints a name
 * @name: function parameter, char pointer
 * @f: function parameter, function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}

/**
 * print_input - prints input
 * @input: char input as a function argument
 */
void print_input(char *input)
{
	while (*input != '\0')
	{
		_putchar(*input);
		input++;
	}
}
