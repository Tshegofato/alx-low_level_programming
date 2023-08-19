#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Returns the num of elements in a dlistint_t linked list.
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The num of elements in the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}

