#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elements of list_t
 *
 * @h: singly linked list to print
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
    size_t i;
    for (i = 0; h; i++)
    {
        printf("[%d] %s\n", h->len, h->str);
    }
    return (i);
}
