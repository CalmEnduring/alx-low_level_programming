#include "main.h"
/**
  * puts2 - prints every other character of a string starting with first
  * @str: string to print
  */
void puts2(char *str)
{
	/**
	  * iterate through string until end of string
	  * by dereferencing pointer
	  */
	while (*str != '\0')
	{	/* print dereference value */
		_putchar(*str);
		/* increment pointer by 2 */
		str += 2;
	}
	_putchar('\n'); /* newline */
}
