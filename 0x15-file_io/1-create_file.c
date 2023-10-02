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

	f = open(filename, O_WRONLY | O_TRUNC, O_CREAT, S_IWUSR | S_IRUSR);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	test = write(f, text_content, sizeof(text_content) - 1);
	if (test == -1)
	{
		return (-1);
	}
	return (1);
}
