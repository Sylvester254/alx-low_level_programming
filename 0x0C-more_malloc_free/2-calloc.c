#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
a = malloc(size * nmemb);
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
a[i] = 0;
}
return (a);
}
