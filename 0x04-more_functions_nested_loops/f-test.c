#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
#include "main.h"
/**
 * more_numbers - function that outputs 10 times the numbers from 0-14
 * _putchar - function that prints the values
 * return null
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
while (i < 10)
{
while (j < 14)
{
if (j >= 14)
{
_putchar (j / 10 + '0');
_putchar (j % 10 + '0');
}
j++;
}
_putchar ('\n');
j = 0;
i++;
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