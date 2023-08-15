#include "_putchar.c"
#include <stdio.h>
int add(int, int);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
/**
 * add - add two num
 * @n1: num 1
 * @n2: num 2
 * Return: n1 + n2
 */
int add(int n1, int n2)
{
	return (n1 + n2);
}
