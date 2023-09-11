#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is run on
 * Return: 0
 */
int main(void)
{
	unsigned long size_c = sizeof(char);
	unsigned long size_i = sizeof(int);
	unsigned long size_li = sizeof(long int);
	unsigned long size_lli = sizeof(long long int);
	unsigned long size_f = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", size_c);
	printf("Size of an int: %lu byte(s)\n", size_i);
	printf("Size of a long int: %lu byte(s)\n", size_li);
	printf("Size of a long long int: %lu byte(s)\n", size_lli);
	printf("Size of a float: %lu byte(s)\n", size_f);
	return	(0);
}
