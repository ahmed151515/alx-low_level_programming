#include "function_pointers.h"
/**
 * print_name - print_name
 * @name: stirng
 * @f: fun
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
