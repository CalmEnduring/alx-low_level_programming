#include "main.h"
/**
 * main - Entry point
 * Description: Prints the alphabet in lower case
 * print_alphabet - uses _putchar function to print alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; ++al)
		_putchar(al);
	_putchar('\n');
}
