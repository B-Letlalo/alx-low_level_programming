#include "lists.h"
void printm(void) __attribute__((constructor));
/**
 * printm - prints before main function is executed
 */

void printm(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
