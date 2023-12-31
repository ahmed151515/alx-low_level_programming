#include "main.h"
/**
 * read_textfile - read_textfile
 * @filename: fgdfg
 * @letters: gfhgfh
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	int f;
	char s[1024 * 8];

	if (filename == NULL || !letters)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}

	count = read(f, &s[0], letters);
	count = write(STDOUT_FILENO, &s[0], count);
	close(f);
	return (count);
}
