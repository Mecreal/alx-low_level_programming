#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

/**
 * dog - Struct dog
 * @owner: Also a string
 * @name: The dog name
 * @age: float
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif