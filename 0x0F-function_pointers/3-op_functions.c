#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - adds two ints
  * @a: int 1
  * @b: int 2
  *
  * Return: integer
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - calculates difference between two ints
  * @a: int 1
  * @b: int 2
  *
  * Return: integer
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - calculates product of two ints
  * @a: int 1
  * @b: int 2
  *
  * Return: integer
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - calculates division of two ints
  * @a: int 1
  * @b: int 2
  *
  * Return: integer
  */
int op_div(int a, int b)
{ /* returns error when dividing by 0 */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - calculates remainder of division of two ints
  * @a: int 1
  * @b: int 2
  *
  * Return: integer
  */
int op_mod(int a, int b)
{ /* returns error when calculating remainder of 0 */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

