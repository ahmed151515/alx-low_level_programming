#include "_putchar.c"

#include "main.c"

/**
 * main - entry funtion
 * Description: main have all code
 * Return: 0
 */
int main(void)
{
	char tmp[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(tmp[i]);
	}
	return (0);
}
