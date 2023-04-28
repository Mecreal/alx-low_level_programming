#include "dog.h"
#include <string.h>


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL) {
		return (NULL);
	}

	name_len = strlen(name) + 1;
	new_name = malloc(name_len * sizeof(char));
	if (new_name == NULL) {
		free(new_dog);
		return (NULL);
	}

	owner_len = strlen(owner) + 1;
	new_owner = malloc(owner_len * sizeof(char));
	if (new_owner == NULL) {
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}