#include "main.h"
/**
 * reverse_array - reverses contents of array.
 * @a: array of integers
 * @n: number of elements
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, j;
i = j = 0;
n = n - 1;
while (i <= n)
{
j = a[n];
a[n--] = a[i];
a[i++] = j;
}
}
