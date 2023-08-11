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

	for (i = 0; i < 52; i++)
	{
		putchar(tmp);
		tmp++;
		if (i == 25)
		{
			tmp -= 58;
		}
	}
	putchar('\n');
	return (0);
}
