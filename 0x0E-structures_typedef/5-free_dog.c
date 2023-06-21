#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees allocated space for dog_t structure
 * @d: structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
