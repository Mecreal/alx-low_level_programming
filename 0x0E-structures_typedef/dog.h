#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Struct dog
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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
