#include "dog.h"
#include <stdlib.h>
/* prototypes for functions to be used */
int stringlen(char *s);
char *stringcop(char *dest, char *src);

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
	dog_t *dawg; /* new struct */
	int name_l = 0, own_l = 0; /* name length + owner length */

	if (name != NULL && owner != NULL)
	{
		name_l = stringlen(name) + 1; /* length of string including '\0' */
		own_l = stringlen(owner) + 1; /* length of string including '\0' */
		dawg = malloc(sizeof(dog_t)); /* allocate space for struct */

		if (dawg == NULL) /* malloc failure */
			return (NULL);

		/* allocated space for name member */
		dawg->name = malloc(sizeof(char) * name_l);
		if (dawg->name == NULL) /* malloc failure */
		{
			free(dawg->name); /* release allocated space */
			return (NULL);
		}

		/* allocate space for owner member */
		dawg->owner = malloc(sizeof(char) * own_l);
		if (dawg->owner == NULL) /* malloc failure */
		{
			free(dawg->name); /* release name space */
			free(dawg); /* release struct space */
			return (NULL);
		}
		/* assign parameters to new struct */
		dawg->name = stringcop(dawg->name, name);
		dawg->owner = stringcop(dawg->owner, owner);
		dawg->age = age;
	}
	return (dawg);
}
/**
 * stringlen - calculates the length of a string
 * @s: string to count
 *
 * Return: string length
 */
int stringlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
/**
 * stringcop - copies a string into another
 * @dest: destination value
 * @src: source value
 *
 * Return: pointer to destination value
 */
char *stringcop(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
