#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 * @head: ptr
 * @str: const char
 * Return: lastnode.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode = malloc(sizeof(list_t));

	if (lastnode == NULL)
	{
		free(lastnode);
		return (NULL);
	}

	lastnode->str = strdup(str);

	if (lastnode->str == NULL)
	{
		free(lastnode);
		return (NULL);
	}

	lastnode->len = strlen(lastnode->str);
	lastnode->next = NULL;
	if (*head == NULL)
	{
		*head = lastnode;
	}

	else

	{
		list_t *prevnode = *head;

		while (prevnode->next != NULL)
		{
			prevnode = prevnode->next;
		}

		prevnode->next = lastnode;
	}

	return (lastnode);
}
