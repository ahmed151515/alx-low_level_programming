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

	for (i = 0; i < 16; i++)
	{
		putchar(tmp);
		tmp++;
		if (i == 9)
		{
			tmp += 39;
		}
	}
	putchar('\n');
	return (0);
}
