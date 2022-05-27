#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: first node
 * @index: node to stop at
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
