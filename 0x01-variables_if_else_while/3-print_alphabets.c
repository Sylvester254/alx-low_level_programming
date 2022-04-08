#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
  char x = 'a';
char Y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (Y <= 'Z')
{
putchar(Y);
Y++;
}
putchar ('\n');
return(0);
}
