#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t linked list.
 * @h: Pointer to the head node of linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

