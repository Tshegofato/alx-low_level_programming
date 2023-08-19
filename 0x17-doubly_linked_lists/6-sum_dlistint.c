#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of dlistint_t linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: Sum of all data (n), or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}

