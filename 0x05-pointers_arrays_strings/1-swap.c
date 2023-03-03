#include "main.h"
/**
  * swap_int - swaps two integers
  * @a: integer 1
  * @b: integer 2
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /* store value of a in temp */
	*a = *b; /* store value of b in a */
	*b = temp; /* stor value of temp(which is value of a) in b */
	/**
	  * the temp variable is created to prevent
	  * the value of a getting lost during the swapping.
	  * Derefencing the pointers allows the access
	  * to the values of the pointers and not to swap
	  * the addresses.
	  */
}
