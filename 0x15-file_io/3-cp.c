#include "main.h"
#define p (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - main
 * @ac: dfdsf
 * @av: kdfd
 * Return: dgf
 */
int main(int ac, char **av)
{
	int f1, f2, test;
	char *s[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(av[1], O_RDONLY);
	if (f1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, p);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	while (test = read(f1, s, 1024) > 0)
	{
		if (write(f2, s, test) != test)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	}
	if (test == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f1 = close(f1);
	f2 = close(f2);
	if (f1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
