#include "main.h"
/**
 * read_textfile - read_textfile
 * @filename: fgdfg
 * @letters: gfhgfh
 * Return: int
 */
size_t read_textfile(const char *filename, size_t letters)
{
	size_t count = 0;
	int f;
	char *c = malloc(letters + 1);

	c[letters + 1] = '\0';

	if (filename == NULL || c == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}

	read(f, c, letters);
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
		count++;
	}

	return (count);
}
