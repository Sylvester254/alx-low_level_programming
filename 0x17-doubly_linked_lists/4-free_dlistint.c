#include "lists.h"
/**
 *  free_dlistint - function that frees a dlistint_t list.
 *
 * @head:pointer to the head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *last;
while (head)
{
last = head->next;
free(head);
head = last;
}
}
