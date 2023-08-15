#include "main.h"
/**
 * times_table - print times_table
 */
void times_table(void)
{
	int i, j, tmp = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (tmp < 10)
			{
				_putchar(tmp + '0');
				if (j < 8)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{

				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
				if (j < 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			tmp += i;
		}
		tmp = 0;
		_putchar('\n');
	}
}
