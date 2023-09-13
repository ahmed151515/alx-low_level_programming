#include "3-calc.h"
/**
 * op_add - op_add
 * @a: int
 * @b: int
 * Return: int
*/
int op_add(int a, int b)
{
    return (a + b);
}
/**
 * op_sub - op_sub
 * @a: int
 * @b: int
 * Return: int
*/
int op_sub(int a, int b)
{
    return (a - b);
}
/**
 * op_mul - op_mul
 * @a: int
 * @b: int
 * Return: int
*/
int op_mul(int a, int b)
{
    return (a * b);
}
/**
 * op_div - op_div
 * @a: int
 * @b: int
 * Return: int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
    return (a / b);
}
/**
 * op_mod - op_mod
 * @a: int
 * @b: int
 * Return: int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
    return (a % b);
}
