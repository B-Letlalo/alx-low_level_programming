#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/**
 * print_name - prints a name
 * @name: function parameter, char pointer
 * @f: function parameter, function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
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
