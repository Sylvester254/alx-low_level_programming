#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer for memory to be filled
 * @b: constant value to be filled
 * @n: number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}