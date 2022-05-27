#include "lists.h"
/**
 * sum_listint - sum all elements of a list
 *
 * @head:first node
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
int sum;
for (sum = 0; head; sum += head->n, head = head->next)
;
return (sum);
}
