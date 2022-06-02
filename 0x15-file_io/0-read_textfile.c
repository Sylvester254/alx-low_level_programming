#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 *
 * @filename: pointer to file's name
 * @letters: no of letters function should read and print.
 * Return: no of bytes function can read or print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t o, w, r;
if (filename == NULL)
{
return (0);
}
o = open(filename, O_RDONLY);
r = read(o, buf, letters);
w = write(STDOUT_FILENO, buf, r);
if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buf);
return (0);
}
free(buf);
close(o);
return (w);
}
