#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	/* declaring letters of the alphabet in a char array*/
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	int i = 0;

	while (i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
