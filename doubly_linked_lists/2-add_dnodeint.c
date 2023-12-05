#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - check the code
 * @n: const int
 * @head: ptr
 * Return: node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL || head == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;

	if (!*head)
	{
		*head = node;
		node->next = NULL;
	}

	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	return (node);
}
