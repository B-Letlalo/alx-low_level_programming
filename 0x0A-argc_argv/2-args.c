#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * Return: 0
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = argc;

	for (; i < j; i++)
	{
		printf("%s\n", argv[i]);
	}
	return  (0);
}
