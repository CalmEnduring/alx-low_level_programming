#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new structure
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Return: pointer to a structure
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int index, index2, index3;
	dog_t *ndog;
	/* function failure */
	if (name == NULL || owner == NULL)
		return (NULL);
	/* allocate space for new structure */
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL) /* malloc failure */
		return (NULL);
	/* read name and owner */
	index = 0;
	while (name[index])
		index++;
	index++; /* increment once more for NULL term */
	while (owner[index])
		index2++;
	index2++; /* increment once more for NULL term */
	/* allocate space for name */
	ndog->name = malloc(sizeof(char) * index);
	if (ndog->name == NULL)
	{
		free(ndog); /* free spaced allocated for structure */
		return (NULL);
	}
	/* allocate space for owner */
	ndog->owner = malloc(sizeof(char) * index2);
	if (ndog->owner == NULL) /* malloc failure */
	{
		free(ndog->name); /* free space allocated for name in struct */
		free(ndog); /* free space allocated for struct */
		return (NULL);
	}
	/* loop through each element in name string */
	for (index3 = 0; index3 < index; index3++)
	{ /* copy name into name in struct */
		ndog->name[index3] = name[index3];
	}
	ndog->age = age; /* copy age into age in struct */
	/* loop through each element in owner string */
	for (index3 = 0; index3 < index2; index3++)
	{ /* copy owner into owner in struct */
		ndog->owner[index3] = owner[index3];
	}
	return (ndog); /* return pointer to struct */
}
