#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
#include "main.h"
/**
 * 
 * 
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
    _putchar (i + '0');
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