#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: ptr
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head->prev = NULL;
		head = head->next;
		free(ptr);
	}
}
