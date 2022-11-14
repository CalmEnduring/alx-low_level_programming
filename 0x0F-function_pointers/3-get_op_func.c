#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
  * get_op_func - fecthes the function to be used
  * @s: the operation
  *
  * Return: function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	/* searches for matching operator */
	while (i < 5)
	{ /* returns corresponding function */
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	/* s != any operator */
	return (0);
}
