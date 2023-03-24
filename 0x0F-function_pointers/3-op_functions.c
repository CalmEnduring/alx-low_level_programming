#include "3-calc.h"
/* This file contains the function definitions */

/**
  * op_add - adds two integers
  * @a: int 1
  * @b: int 2
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two integers
  * @a: int 1
  * @b: int 2
  *
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two integers
  * @a: int 1
  * @b: int 2
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two integers
  * @a: int 1
  * @b: int 2
  *
  * Return: result of division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - gets the remainder of two integers
  * @a: int 1
  * @b: int 2
  *
  * Return: remainder of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
