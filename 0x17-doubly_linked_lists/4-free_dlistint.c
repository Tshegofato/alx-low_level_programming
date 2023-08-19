#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;

while (current != NULL)
{
dlistint_t *next = current->next;
free(current);
current = next;
}
}

