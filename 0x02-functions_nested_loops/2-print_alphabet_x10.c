#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	/*declaring alphabet letters in an array*/
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w'
		, 'x', 'y', 'z'};
	int j = 0;

	/*prints alphabet in lowercase 10 times*/
	for (; j < 10; j++)
	{
		int i = 0;

		while (i < 26)
		{
			_putchar(alphabet[i]);
			i++;
		}
		_putchar('\n');
	}
}
