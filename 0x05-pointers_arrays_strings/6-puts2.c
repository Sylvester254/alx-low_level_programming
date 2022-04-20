/**
 * puts2 - function that prints every other character of a string, starting with the first character.
 * 
 * @str: string
 * @return * void 
 */
void puts2(char *str)
{
   int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}