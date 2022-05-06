#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to a new string
 * @str: string
 * Return: char*
 */
char *_strdup(char *str)
{
int i;
if (str != NULL)
{
for  (i = 0; str[i] != '\0'; i++)
{
str = malloc(sizeof(char) * i);
}
return (str);
}
else
{
return (NULL);
}
free(str);
}
