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
	FILE *f;
	char c = '1';

	if (filename == NULL)
	{
		return (0);
	}
	f = fopen(filename, "r");
	if (f == NULL)
	{
		return 0;
	}

	while (letters-- && c)
	{
		c = getc(f);

		_putchar(c);
		count++;
	}

	return (count);
}
