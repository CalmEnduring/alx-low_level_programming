#include "function_pointers.h"
/**
  * print_name - pointer function that prints a name
  * @name: name to print
  * @f: a function call
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
