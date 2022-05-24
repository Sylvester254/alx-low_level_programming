#include "lists.h"
#include <stdio.h>
/**
 * list_len - gives the number of elements in a linked list_t.
 *
 * @h: singly linked list
 * Return: size_t 
 */
size_t list_len(const list_t *h)
{
size_t el;
while (h)
{
printf("[%d] %s\n", h->len, h->str);
el++;
h = h->next;
}
return (el);
}