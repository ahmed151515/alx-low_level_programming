#include <stdio.h>
/**
 * main - entry funtion
 * Description: main have all code
 * Return: 0
 */
int main(void)
{
	int i;
	char tmp = 'a';

	for (i = 0; i < 26; i++)
	{
		if (tmp == 'e' || tmp == 'q')
		{
			tmp++;
			continue;
		}
		putchar(tmp);
		tmp++;
	}
	putchar('\n');
	return (0);
}
