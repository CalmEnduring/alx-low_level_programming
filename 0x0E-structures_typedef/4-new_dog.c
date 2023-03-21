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
	int name_l = 0, owner_l = 0, i = 0; /* iterators */

	if (name != NULL && owner != NULL)
	{
		while (name[name_l]) /* get length of name */
			name_l++;

		while (owner[owner_l]) /* get length of owner */
			owner_l++;

		nudog = malloc(sizeof(dog_t)); /* assign space for struct */
		if (nudog == NULL) /* allocation failure */
			return (NULL);
		/* allocate space for name element */
		nudog->name = malloc(sizeof(char) * (name_l + 1));
		if (nudog->name == NULL) /* allocation failure */
		{
			free(nudog); /* free space for structure */
			return (NULL);
		}
		/* allocate space for owner element */
		nudog->owner = malloc(sizeof(char) * (owner_l + 1));
		if (nudog->owner == NULL) /* allocation failure */
		{
			free(nudog->name); /* free space for name */
			free(nudog); /* free space for structure */
			return (NULL);
		}
		while (name[i]) /* copy name into struct element */
		{
			nudog->name[i] = name[i];
			i++;
		}
		i = 0;
		while (owner[i]) /* copy owner into struct element */
		{
			nudog->owner[i] = owner[i];
			i++;
		}
		nudog->age = age; /* initialize age */
	}
	return (nudog); /* return new dog */
}
