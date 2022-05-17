#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - finds sum of all its parameters.
 *
 * @n: number of input variables
 * @...: all input parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list num;
int i, sum;
if (n == 0)
{
return (0);
}
va_start(num, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(num, const unsigned int);
}
va_end(num);
return (sum);
}
