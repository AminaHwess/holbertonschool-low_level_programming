#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: const
 * Return: size
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
