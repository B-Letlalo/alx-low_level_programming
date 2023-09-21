#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: function parameter,integer pointer
 * @n: function parameter, integer
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
