#include "main.h"
/**
 * rev_string - prints a string in reverse, followed by a new line.
 *
 * @s: input string to print.
 * Return: nothing
 */
void rev_st ring(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}

	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
}
}
