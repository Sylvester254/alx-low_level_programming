#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_int(va_list a);
void p_float(va_list a);
void p_char(va_list a);
void p_string(va_list a);
/**
 * struct printAll - structure definition
 * @type: type
 * @b: function to print
 */
typedef struct printAll
{
char *type;
void (*b)(va_list);
} printAll;
#endif