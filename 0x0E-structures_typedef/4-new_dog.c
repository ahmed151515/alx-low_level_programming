#include "dog.h"
/**
 * new_dog - new_dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;

	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->name = name;
	tmp->age = age;
	tmp->owner = owner;

	return (tmp);
}
