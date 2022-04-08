#include <stdio.h>
/**
 *main - prints the alphabet in lowercase.
(*
 *Return 0 on success
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return(0);
}
