#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the head of the list
 * @str: string to add to new node
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return	(NULL);
	}
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return	(NULL);
		}
		new_node->len = strlen(str);
	}
	new_node->next = *head;
	*head = new_node;

	return	(new_node);
}
