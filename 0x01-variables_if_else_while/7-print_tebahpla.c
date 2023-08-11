#include <stdio.h>
/**
 * main - entry funtion
 * Description: main have all code
 * Return: 0
 */
int main(void)
{
	int i;
	char tmp = 'z';

	for (i = 0; i < 26; i++)
	{
		putchar(tmp);
		tmp--;
	}
	putchar('\n');
	return (0);
}
