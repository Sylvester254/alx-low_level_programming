#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: pointer to name of the file to create.
 * @text_content: NULL terminated string to write into the file.
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
int o, w, l = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, l);
if (o == -1 || w == -1)
{
return (-1);
}
close(0);
return (0);
}
