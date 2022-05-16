#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string name
 * @f: function pointer to char pointer
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
(*f) (name);
}
