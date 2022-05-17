#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#define VALIDTYPESCONDITIONAL(i) (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printAll - structure definition
 * @type: type
 * @b: function to print
 */
typedef struct printAll
{
char *type;
void (*b)();
} printType;
#endif
