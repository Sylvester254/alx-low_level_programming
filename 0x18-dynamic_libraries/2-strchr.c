/**
 * _strchr - locates a character in a string
 *
 * @s: a string to be scanned
 * @c: character to be located
 * Return: s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else if (*(s + 1) == c)
{
return (s + 1);
}
s++;
}
return (s + 1);
}
