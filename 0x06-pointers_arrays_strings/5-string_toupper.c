#include"main.h"
/**
 * string_toupper - change all lowercase to upercase
 * @str: string to be changed
 * Return: string
 */
char *string_toupp er(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
