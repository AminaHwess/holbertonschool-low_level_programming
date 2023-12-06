#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: ptr
 * @index: unsigned int
 * Return: ptr.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		if (!ptr)
		{
			return (NULL);
		}
		else
		{
			ptr = ptr->next;
		}
	}
	return (ptr);
}
