#include "main.h"
/**
 * print_triangle - function that prints a triangle.
 * _putchar - function to print.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size; j >= 1; j--)
{
if (j > i)
{
_putchar (' ');
}
else
{
_putchar ('#');
}
}
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
