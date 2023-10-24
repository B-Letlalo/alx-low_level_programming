#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		printf("Linked list is empty\n");
		return	(0);
	}
	else
	{
		const listint_t *ptr = h;

		while (ptr != NULL)
		{
			printf("%d\n", ptr->n);
			counter++;
			ptr = ptr->next;
		}
		return	(counter);
	}
}
