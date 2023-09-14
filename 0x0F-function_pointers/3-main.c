#include "3-calc.h"
/**
 * main - main
 * @argc: int
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*op_f)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", op_f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
