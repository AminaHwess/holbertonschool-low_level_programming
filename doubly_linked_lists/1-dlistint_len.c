#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: const
 * Return: size
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
