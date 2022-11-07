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

	if (name == NULL || owner == NULL)
		return (NULL); /* function failure */
	/* allocate space for new structure */
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL) /* malloc failure */
		return (NULL);
	for (index = 0; name[index]; index++)
		;
	index++; /* increment once more for NULL term */
	/* allocate space for name */
	ndog->name = malloc(index * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog); /* free spaced allocated for structure */
		return (NULL);
	}
	for (index3 = 0; index3 < index; index3++)
	{ /* copy name into name in struct */
		ndog->name[index3] = name[index3];
	}
	ndog->age = age; /* copy age into age in struct */
	for (index2 = 0; owner[index2]; index2++)
		;
	index2++; /* increment once more for NULL term */
	/* allocate space for owner */
	ndog->owner = malloc(index2 * sizeof(char));
	if (ndog->owner == NULL) /* malloc failure */
	{
		free(ndog->name); /* free space allocated for name in struct */
		free(ndog); /* free space allocated for struct */
		return (NULL);
	}
	for (index3 = 0; index3 < index2; index3++)
	{ /* copy owner into owner in struct */
		ndog->owner[index3] = owner[index3];
	}
	return (ndog); /* return pointer to struct */
}
