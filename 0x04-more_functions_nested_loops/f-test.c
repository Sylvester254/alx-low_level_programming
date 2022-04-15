#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    //print_triangle(2);
    print_triangle(10);
    //print_triangle(1);
    //print_triangle(0);
    return (0);
}
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
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}