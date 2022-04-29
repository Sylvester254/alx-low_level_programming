#include "main.h"
/**
 * is_prime_number - checks if number is a prime
 * @n: number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
return (_prime(n, 2));
}
/**
 * _prime - determine if prime
 *
 * @n: no to check if prime
 * @i: counter number
 * Return: 1
 */
int _prime(int n, int i)
{
int m;
m = n / 2;
if ((n % i == 0 && i <= m) || n < 0 || n == 1)
{
return (0);
}
else if (n % i != 0 && i <= m)
{
return (_prime(n, i + 1));
}
else
return (1);
}
