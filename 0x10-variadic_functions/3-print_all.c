#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_char - prints characters
 *
 * @a: arguments
 */
void p_char(va_list a)
{
printf("%c", va_arg(a, int));
}
/**
 * p_int - print integers
 *
 * @a: arguments
 */
void p_int(va_list a)
{
printf("%d", va_arg(a, int));
}
/**
 * p_float - prints float values
 *
 * @a: arguments
 */
void p_float(va_list a)
{
printf("%f", va_arg(a, double));
}
/**
 * p_string - prints strings
 *
 * @a: arguments
 */
void p_string(va_list a)
{
char *st = va_arg(a, char *);
st == NULL ? printf("(nil)") : printf("%s", st);
}
/**
 * print_all - prints any type
 *
 * @format: format symbols in order
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i, j;
i = j = 0;
char *s = "";
printAll printType[] = {
{ "c", p_char },
{ "i", p_int },
{ "f", p_float },
{ "s", p_string },
{NULL, NULL}
};
va_start(ap, format);
while (format && format[i])
{
j = 0;
while (j < 4)
{
if (*printType[j].type == format[i])
{
printf("%s", s);
printType[j].b(ap);
s = ", ";
}
j++;
}
i++;
}
printf("\n");
}
