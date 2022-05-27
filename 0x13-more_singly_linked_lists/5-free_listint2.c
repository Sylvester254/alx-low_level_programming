#include "lists.h"
/**
 * free_listint2 - frees listint_t list
 *
 * @head: node
 */
void free_listint2(listint_t **head)
{
listint_t *a, *c;
if (head == NULL)
{
return;
}
c = *head;
while (c  != NULL)
{
a = c;
c = c->next;
free(a);
}
*head = NULL;
}
