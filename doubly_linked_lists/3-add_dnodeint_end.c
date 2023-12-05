#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @n: const int
 * @head: ptr
 * Return: lastnode.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastnode = malloc(sizeof(dlistint_t));

	if (lastnode == NULL)
	{
		free(lastnode);
		return (NULL);
	}
	lastnode->n = n;
	lastnode->next = NULL;

	if (!*head)
	{
		*head = lastnode;
		lastnode->next = NULL;
	}

	else
	{
		dlistint_t *ptr = *head;

		while (ptr->next != NULL)

		{
			ptr = ptr->next;
		}
		ptr->next = lastnode;
	}
	return (lastnode);
}
