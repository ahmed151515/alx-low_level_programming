#include "variadic_functions.h"
/**
 * chack - chack
 * @tmp: char
 * Return: int
 */
int chack(char tmp)
{
	char *list = "icsf\0";

	while (*list != '\0')
	{
		if (*list == tmp)
		{
			return (1);
		}
		list++;
	}
	return (0);
}
/**
 * print_all - print_all
 * @format: string
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *tmp;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 's':
				tmp = va_arg(arg, char *);
				switch ((int)(!tmp))
				{
					case 1:
						tmp = "(nil)";
						break;
				}
				printf("%s", tmp);
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
		}
		if (format[i + 1] != '\0' && chack(format[i]))
		{
			printf(", ");
		}
		i++;
	}
	va_end(arg);
	printf("\n");

}
