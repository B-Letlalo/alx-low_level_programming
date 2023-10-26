#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: function parameter
 * @m: function parameter
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int counter = 0;

	while (xor_result)
	{
		counter += xor_result & 1;
		xor_result >>= 1;
	}

	return (counter);
}
