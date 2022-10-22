#include "main.h"
/**
  * _puts_recursion - Prints a string
  * @s: String
  *
  * Return: (void)
  */
void _puts_recursion(char *s)
{/* if the value pointed to in s == NULL, execute block */
	if (*s == '\0')
	{
		_putchar('\0');/* terminates strings */
		_putchar('\n');
		return;/* returns void */
	}
	else
	{
		_putchar(*s);/* prints the value pointed to in s */
		s++;/* increments to the consequential value in the string */
		_puts_recursion(s);/* loops fuction */
	}
}
