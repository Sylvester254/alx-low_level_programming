#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, a, l = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
o = open(filename, O_WRONLY | O_APPEND);
a = write(o, text_content, l);
if (o == -1 || a == -1)
{
return (-1);
}
close(0);
return (0);
}
