#include <stdlib.h>
#include <stdio.h>
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
	char *s;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		s[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		s[len++] = s2[index];

	s[len] = '\0';

	return (s);
}
