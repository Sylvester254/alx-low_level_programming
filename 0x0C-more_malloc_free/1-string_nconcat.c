#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: no of bytes in s2 to concat in s1
 * Return: char*
 * Otherwise - NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i1, i2, k, size;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i1 = 0; i1 < s1[i1]; i1++)
;
for (i2 = 0; i2 < s2[i2]; i2++)
;
if (i2 > n)
{
i2 == n;
}

size = i1 + i2 + 1;
char s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
for (k = 0; k < size - 1; k++)
{
k < i1 ? (s[k] = s1[k]) : (s[k] = s2[k - i1]);
}
s[size] = '\0';
return (s);
}
