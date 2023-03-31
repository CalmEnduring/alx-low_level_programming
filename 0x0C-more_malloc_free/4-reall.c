#include "main.h"
/**
  *_realloc - reallocates memory block using malloc and free
  * @old_size: size of previous space
  * @new_size: size of new space
  * @ptr: pointer to previous space
  *
  * Return: void
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *pntr;

	if (new_size == old_size)
		return (ptr);
