#include "main.h"
/**
  * malloc_checked - allocates memory using malloc
  * @b: size of memory to allocate
  *
  * Return: pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	int *space;

	space = malloc(b);

	if (space == NULL)
	{
		exit(98);
	}
	else
	{
		return (space);
	}
}
