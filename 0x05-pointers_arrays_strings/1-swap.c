#include "main.h"
/**
  * swap_int - Swaps intengers
  * @a: integer 1
  * @b: integer 2
  *
  * Return: 0
  */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
