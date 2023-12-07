#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *node = malloc(sizeof(dlistint_t)), *tmp = *h;
    unsigned int i = 1;
    if (!node)
        return (0);
    node->n = n;
    if (idx == 0)
    {
        node->prev = NULL;
        node->next = *h;
        *h = node;
    }
    if (!*h)
    {
        *h = node;
        node->prev = NULL;
        node->next = NULL;
    }

    while (i < idx && idx > 0)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return (NULL);
        i++;
    }
    if (tmp->next != NULL)
    {
        node->next = tmp->next;
        tmp->next->prev = node;
        tmp->next = node;
        node->prev = tmp;
    }
    else if (tmp->next == NULL)
    {
        node->prev = tmp;
        tmp->next = node;
        node->next = NULL;
    }
    return (node);
}