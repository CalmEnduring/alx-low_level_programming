#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a struct dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	dawg = malloc(sizeof(name) + sizeof(age) + sizeof(owner));
	if (dawg == NULL) /* malloc failure */
		return (NULL);

	dawg->name = name;
	dawg->age = age;
	dawg->owner = owner;

	return (dawg);
}
