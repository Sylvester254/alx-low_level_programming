#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 *
 * @s: input string to print.
 * Return: nothing
 */
void print_ rev(char *s)
{
	{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
}
