#include <stdio.h>
/**
 * main - entry funtion
 * Description: main have all code
 * Return: 0
 */
int main(void)
{
	int i;
	char tmp = '0';

	for (i = 0; i < 10; i++)
	{
		putchar(tmp);
		tmp++;
	}
	putchar('\n');
	return (0);
}
