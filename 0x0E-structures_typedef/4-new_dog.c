#include "dog.h"
/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: a new dog of dog_t type
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nudog; /* pointer to struct dog */

	/* allocate space for new struct */
	nudog = malloc(sizeof(struct dog));
	if (nudog == NULL) /* if no space available */
	{
		return (NULL); /* return NULL */
	}
	else /* initialize elements of struct */
	{
		nudog->name = name;
		nudog->age = age;
		nudog->owner = owner;
	}

	return (nudog); /* return new structure */
}
