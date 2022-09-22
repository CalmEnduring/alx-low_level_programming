#include "main.h"
/**
  * _puts - Prints a string
  *@str: Variable to print
  * Return: string
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
