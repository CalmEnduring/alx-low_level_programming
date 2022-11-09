#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - frees dynamicaly allocated memory of a struct
  * @d: pointer to a structure
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
