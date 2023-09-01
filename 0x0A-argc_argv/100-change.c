#include "main.h"
/**
 * main - main
 * @argv: araay
 * @argc: int
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num[] = {25, 10, 5, 2, 1};
	int res = 0, i, n;

	n = atoi(argv[1]);
	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (n >= num[i])
		{
			res += n / num[i];
			n %= num[i];
			if (n == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
