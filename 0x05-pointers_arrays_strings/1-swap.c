#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: function argument, integer 1
 * @b: function argument, integer 2
 */
void swap_int(int *a, int *b)
{
	/*setting placeholders for dereference of a and b*/
	int temp_a = *a;
	int temp_b = *b;

	*a = temp_b;
	*b = temp_a;
}
