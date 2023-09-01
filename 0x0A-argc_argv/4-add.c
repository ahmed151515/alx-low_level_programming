#include "main.h"
/**
 * main - main
 * @argv: araay
 * @argc: int
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum +=  atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
		}
	}
	printf("%d\n", sum);
	return (0);
}
