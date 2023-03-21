#include "dog.h"
/**
  * init_dog - initializes a variable of type struct dog
  * @d: structure
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* initialize variables in struct dog */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
