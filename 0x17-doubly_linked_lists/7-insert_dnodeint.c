#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to the head of dlistint_t list
 * @idx: index of where the new node should be added
 * @n: integer for the new node
 * Return:address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *l = *h, *new;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
for (; idx != 1; idx--)
{
l = l->next;
if (l == NULL)
{
return (NULL);
}
}
if (l->next == NULL)
{
return (add_dnodeint_end(h, n));
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = l;
new->next = l->next;
l->next->prev = new;
l->next = new;
return (new);
}
