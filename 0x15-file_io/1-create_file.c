#include "main.h"
/**
 * size_stirng - size_stirn
 * @s: stirng
 * Return: int
 */
int size_stirng(char *s)
{
	int size = 0;

	if (s == NULL)
	{
		return (0);
	}

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
	int test = 0, len = size_stirng(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
	{
		return (-1);
	}
	if (len == 0)
	{
		close(f);
		return (1);
	}
	test = write(f, text_content, size_stirng(text_content));
	close(f);
	if (test != len)
	{
		return (-1);
	}
	return (1);
}
