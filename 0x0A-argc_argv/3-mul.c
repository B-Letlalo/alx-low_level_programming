#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg_count = argc - 1;
	int answer;

	/*check for two arguments excluding name of program*/
	if (arg_count != 2)
	{
		printf("Error\n");
		return	(1);
	}
	else
	{
		answer = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", answer);
		return	(0);
	}
}
