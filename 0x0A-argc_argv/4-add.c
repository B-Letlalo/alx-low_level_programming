#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int answer = 0;
	int validNumbersFound = 0;

	/*checking if all arguments are digits*/
	for (; i < argc; i++)
	{
		int j = 0;

		for (; argv[i][j] != '\0'; j++)
		{
			/*If they are not valid digits*/
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return	(1);
			}
		}
		/*if they are valid digits*/
		answer = answer + atoi(argv[i]);
		validNumbersFound = 1;
	}
	if (validNumbersFound)
	{
		printf("%d\n", answer);
	}
	else
	{
		printf("0\n");
	}
	return	(0);
}
