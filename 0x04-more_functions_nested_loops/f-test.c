#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = ',';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
#include "main.h"
/**
 * _isupper - tests whether a character in the  alphabet is uppercase or lowercase.
 * @c: character to be checked.
 * Return: 1 if the character is uppercase.
 * 0 if the character is lowercase.
 */
int _isupper(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    { 
        if (c >= 'A' && c <= 'Z')
        {
            return (1);
        }
	    else
		return (0);
    }
		
}
