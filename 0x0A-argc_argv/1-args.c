#include <stdio.h>
/**
 * main - prints no of arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%d\n", i);
    }
    return (0);
}