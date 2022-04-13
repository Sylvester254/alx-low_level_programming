#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
(*
 * Return: Nothing.
 */
void print_times_table(int n)
{
int i, j, res;
if (n > 0 || n < 15)
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10 && res < 100)
			{
                _putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
            else if (res >= 100 && j != 0)
            {
                _putchar((res / 100) + '0');
                _putchar((res / 10) % 10 + '0');
                _putchar((res %10) + '0');
            }
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
}
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
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
