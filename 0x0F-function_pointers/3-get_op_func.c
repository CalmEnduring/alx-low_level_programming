 #include "3-calc.h"
/**
  * get_op_func - selects the correct function for chosen operation
  * @s: operation
  *
  * Return: result of operation
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
	}; /* function list */
	int i = 0; /* iterator */

	while (i < 5) /* search func list of corresponding func */
	{
		if (strcmp(s, ops[i].op) == 0) /* if operation match */
			return (ops[i].f); /* return function */
		i++; /* move to next function */
	}
	return (NULL);
}
