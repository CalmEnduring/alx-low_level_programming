#include "main.h"
/**
 * print_alphabet -> utilizes on the _putchar function to print alphabet
 * Return: 1 if true, 0 if false
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; ++al)
		_putchar(al);
	_putchar('\n');
}
