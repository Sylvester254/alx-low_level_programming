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

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}