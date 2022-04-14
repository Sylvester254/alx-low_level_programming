#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
#include "main.h"
/**
 * 
 * 
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for ( i = 0; i < size; i++)
{
    for ( j = 1; j < size; j++)
    {
        _putchar ('#');
    
    }
    
    _putchar ('#');
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