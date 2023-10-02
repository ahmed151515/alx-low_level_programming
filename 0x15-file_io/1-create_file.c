#include "main.h"
/**
 * create_file - create_file
 * @filename: same
 * @text_content: same
 * Return:int
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int test;

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_TRUNC, O_CREAT, 0600);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}
	test = write(f, text_content, sizeof(text_content) - 1);
	if (test == -1)
	{
		return (-1);
	}
	close(f);
	return (test == sizeof (text_content) - 1? 1:-1);
}
