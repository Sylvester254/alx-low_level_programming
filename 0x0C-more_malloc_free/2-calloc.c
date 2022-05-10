#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
a = malloc(size * nmemb);
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
a[i] = 0;
}
return (a);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}