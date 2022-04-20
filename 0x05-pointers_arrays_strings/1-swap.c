#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: pointer for swapping with b
 * @b: pointer for swapping with a
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
