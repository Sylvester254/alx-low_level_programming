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