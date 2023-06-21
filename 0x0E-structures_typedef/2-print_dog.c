#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{	/* condition ? expressoin1 : expression2 */
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
