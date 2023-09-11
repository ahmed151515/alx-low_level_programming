#include "dog.h"
/**
 * print_dog - print_dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	printf("Name %s\n", d-> name == NULL ? "nil" : d ->name);
	if (d->age == 0)
	{
		printf("Age %s\n", "nil");
	}
	else
	{
	printf("Age %.5f\n", d -> age);
	}
	printf("Owner %s\n", d-> owner == NULL ? "nil" : d ->owner);
}
