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
 * append_text_to_file - append_text_to_file
 * @filename: same
 * @text_content: same
 * Return:int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int test = 0, len = size_stirng(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_ APPEND | O_WRONLY);
	if (f == -1)
	{
		return (-1);
	}
	if (len == 0)
	{
		close(f);
		return (1);
	}
	test = write(f, text_content, len);
	if (test == -1)
	{
		return (-1);
	}
	close(f);
	return (test == len ? 1 : -1);
}
