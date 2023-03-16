#include "main.h"
/**
  * malloc_checked - allocates memory using malloc
  * @b: size of memory to allocate
  *
  * Return: pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	int *space; /* pointer to allocate memory */

	space = malloc(b); /* allocate memory */

	/* if no space available */
	if (space == NULL)
	{
		/* process termination with status val 98 */
		exit(98);
	}
	else
	{
		/* otherwise return pointer to allocated memory */
		return (space);
	}
}
