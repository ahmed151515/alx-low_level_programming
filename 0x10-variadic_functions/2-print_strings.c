#include "variadic_functions.h"
/**
 * print_numbers - print_numbers
 * @separator: string
 * @n: int+
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *tmp;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(arg, char *);
		printf("%s", (tmp == NULL ? "(nil)" : tmp));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
