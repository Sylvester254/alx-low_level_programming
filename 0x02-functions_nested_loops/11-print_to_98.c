#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all 
 * natural numbers from n to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
}