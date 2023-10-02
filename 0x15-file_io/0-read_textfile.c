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
	char s[1024 * 8];

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY, 0600);
	if (f == -1)
	{
		return (0);
	}

	count = read(f, &s[0], letters);
	write(1, &s[0], count);
	close(f);
	return (count);
}
