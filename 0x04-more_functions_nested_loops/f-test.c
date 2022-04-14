#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
#include "main.h"
/**
 * print_most_numbers - function outputs numbers from 0-9.
 * _putchar - function displays the values followed by a newline.
 */
void print_most_numbers(void)
{
char c;
for (c = '0';c <= '9';c++)
{
if (!(c == '2' || c == '4'))
{
_putchar (c);
}
}
_putchar ('\n');
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