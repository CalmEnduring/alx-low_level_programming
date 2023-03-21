#include "dog.h"
/**
  * free_dog - free space allocated to a struct of dog_t
  * @d: structure
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
