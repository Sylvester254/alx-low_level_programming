#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: no of bytes of src
 * Return: pointer to the result string
 */
char *_str ncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
for (j = 0; dest[j] != '\0'; j++);
while (src[i] != '\0' && i < n)
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
