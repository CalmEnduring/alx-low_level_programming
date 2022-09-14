#include "main.h"
/**
 * print_alphabet_x10 -> utilizes the _putchar function to print
 * the alphabet 10 times
 * Return: 1 if true, 0 if false
 */
void print_alphabet_x10(void)
{
	int al;

	for (al = 'a'; al <= 'z'; ++al)
		_putchar(al * 10);
	_putchar('\n');
}
