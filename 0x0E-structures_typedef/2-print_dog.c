#include "dog.h"
/**
 * print_dog - print_dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d-> name  ? d ->name : "(nil)");
	printf("Age: %f\n", d -> age);
	printf("Owner: %s\n", d-> owner ? d ->owner : "(nil)");
}
