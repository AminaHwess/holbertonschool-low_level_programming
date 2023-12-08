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
    if (!*h)
    {
        *h = node;
        node->prev = NULL;
        node->next = NULL;
    }
    if (idx == 0 && h)
    {
        node->prev = NULL;
        node->next = *h;
        (*h)->prev = node;
        *h = node;
        return (node);
    }

    while (i < idx)
    {
        tmp = tmp->next;
        if (tmp->next == NULL)
            return (NULL);
        i++;
    }
    if (tmp->next != NULL)
    {
        node->next = tmp->next;
        node->next->prev = node;
        tmp->next = node;
        node->prev = tmp;
    }
    else if (tmp->next == NULL)
    {
        node->prev = tmp;
        tmp->next = node;
        node->next = NULL;
        *h = tmp;
    }
    return (node);
}