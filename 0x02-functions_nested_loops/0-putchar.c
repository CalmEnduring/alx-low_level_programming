#include "main.h"

/**
 * main - Entry point
 * Description: Prints putchar
 * Return: 0
 */

int main(void)
{
	char *ce = "_putchar";

	while (*ce)
	{
		putchar(*ce);
		ce++;
	}
	putchar('\n');

	return (0);
}
