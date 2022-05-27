#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: first node
 * Return: int
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *c, *a;
if (head == NULL)
{
return (0);
}
a = c = *head;
if (*head)
{
i = c->n;
*head = c->next;
free(a);
}
else
{
i = 0;
}
return (i);
}
