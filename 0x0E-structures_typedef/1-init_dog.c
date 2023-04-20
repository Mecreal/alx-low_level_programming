#include "dog.h"

/**
 * init_dog - function of sum
 * @d: dog's structure
 * @name: initialisation of name
 * @age: initialisation of age
 * @owner: initialisation of owner
 * Return: the operator function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}