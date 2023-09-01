#include "main.h"
/**
 * main - main
 * @argv: araay
 * @argc: int
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc == 3 && atoi(argv[1]) && atoi(argv[2]))
	{
		int res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
