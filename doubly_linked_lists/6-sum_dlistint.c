#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: ptr
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;

	if (!ptr)
	{
		return (0);
	}

	if (ptr || ptr->next == NULL)
	{
		sum = ptr->n;
	}

	if (ptr)
	{

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			sum += ptr->n;
		}
	}

	return (sum);
}
