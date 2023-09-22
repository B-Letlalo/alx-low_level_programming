#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: function parameter, int pointer
 * @size: function parameter, size
 */
void print_diagsums(int *a, int size)
{
	int count_1;
	int count_2;
	int i;

	count_1 = 0;
	count_2 = 0;

	for (i = 0; i < size; i++)
	{
	count_1 = count_1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
	count_2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", count_1, count_2);
}
