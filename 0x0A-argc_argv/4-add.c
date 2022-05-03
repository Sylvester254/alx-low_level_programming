#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints sum of positive no. in args.
 * @argc: argument count
 * @argv: argument vector
 * Return:0
 */
int main(int argc, char *argv[])
{
int i;
int s = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
s += atoi(argv[i]);
printf("%d\n", s);
}
return (0);
}
else
{
printf("0\n");
}
}
