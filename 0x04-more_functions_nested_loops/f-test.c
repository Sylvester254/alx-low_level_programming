#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
/**
 * mul - multiplies a and b
 * @a: 1st value
 * @b: 2nd value
 */
int mul(int a, int b)
{
int res = a * b;
return(res);
}