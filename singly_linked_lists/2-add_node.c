#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 * @head: ptr
 * @str: const char
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *firstnode = malloc(sizeof(list_t));

	if (firstnode == NULL)
	{
		free(firstnode);
		return (NULL);
	}

	firstnode->str = strdup(str);

	if (firstnode->str == NULL)
	{
		free(firstnode);
		return (NULL);
	}

	firstnode->len = strlen(firstnode->str);
	firstnode->next = *head;
	*head = firstnode;
	return (firstnode);
}
