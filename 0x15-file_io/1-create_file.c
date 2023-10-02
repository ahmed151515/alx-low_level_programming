#include "main.h"
/**
 * size_stirng - size_stirn
 * @s: stirng
 * Return: int
 */
int size_stirng(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
/**
 * create_file - create_file
 * @filename: same
 * @text_content: same
 * Return:int
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int test = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (f == -1)
	{
		return (-1);
	}
	if (size_stirng(text_content) == 0)
	{
		close(f);
		return (1);
	}
	test = write(f, text_content, size_stirng(text_content));
	if (test == -1)
	{
		return (-1);
	}
	close(f);
	return (test == size_stirng(text_content) ? 1 : -1);
}
