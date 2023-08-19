#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t linked list.
 * @head: Pointer to pointer to the head node of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

while (current != NULL)
{
if (count == index)
{
if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}

current = current->next;
count++;
}

return (-1);
}
