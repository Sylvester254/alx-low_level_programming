#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 *
 * @head: first node
 * @index:location to delete node
 * Return: 1 if succeeded or -1 if it failed 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *c, *nxt;
if (!head || !*head)
{
return (-1);
}
c = *head;
if (index == 0)
{
*head = (*head)->next;
free(c);
return (1);
}
for (i = 0; i < (index - 1); i++)
{
c = c->next;
if (c == NULL)
{
return (-1);
}
}
nxt = c->next;
c->next = nxt->next;
free(nxt);
return (1);
}
