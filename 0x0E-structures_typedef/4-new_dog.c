#include "dog.h"

int len(char *s);
char *copy(char *dest, char *src);

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
	int name_l = 0, owner_l = 0; /* iterators */

	if (name != NULL && owner != NULL)
	{
		name_l = len(name); /* get length of name */
		owner_l = len(owner); /* get length of owner */

		nudog = malloc(sizeof(dog_t)); /* assign space for struct */
		if (nudog == NULL) /* allocation failure */
			return (NULL);
		/* allocate space for name element */
		nudog->name = malloc(sizeof(char) * name_l);
		if (nudog->name == NULL) /* allocation failure */
		{
			free(nudog); /* free space for structure */
			return (NULL);
		}
		/* allocate space for owner element */
		nudog->owner = malloc(sizeof(char) * owner_l);
		if (nudog->owner == NULL) /* allocation failure */
		{
			free(nudog->name); /* free space for name */
			free(nudog); /* free space for structure */
			return (NULL);
		}
		nudog->name = copy(nudog->name, name); /* copy name into struct element */
		nudog->owner = copy(nudog->owner, owner);/* copy owner into struct element */
		nudog->age = age; /* initialize age */
	}
	return (nudog); /* return new dog */
}
/**
  * len - retrieves length of a string
  * @s: string
  *
  * Return: length of string
  */
int len(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
/**
  * copy - copies a string to a destinaion
  * @src: string to copyy
  * @dest: destination to copy to
  *
  * Return: pointer to destination
  */
char *copy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
