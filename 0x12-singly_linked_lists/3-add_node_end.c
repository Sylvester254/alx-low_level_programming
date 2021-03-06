#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	d = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = d;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
