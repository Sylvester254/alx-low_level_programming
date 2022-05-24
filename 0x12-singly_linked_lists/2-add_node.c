#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 */
list_t *add_node(list_t **head, const char *str)
{
char *d;
int l;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return(NULL);
}
d = strdup(str);
if (d == NULL)
{
free(new);
return (NULL);
}
for (l = 0; str[l];)
{
l++;
}
new->str = d;
new->len = l;
new->next = *head;
*head = new;
return (new);
}
