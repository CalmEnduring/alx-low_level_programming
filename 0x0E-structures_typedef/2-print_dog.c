#include "dog.h"
/**
  * print_dog - prints a struct dog
  * @d: strcture
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)");
		printf("Age: %f\n Owner: %s\n", d->age, d->owner);
	}
	else if (d->age == 0.0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)");
		printf("Owner: %s\n", d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: (nil)", d->name, d->age);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
