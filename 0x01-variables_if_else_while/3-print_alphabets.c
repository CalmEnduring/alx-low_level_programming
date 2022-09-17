#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lower and upper case
 * Return: 0
 */
int main(void)
{
	char d;
	char e;

	for (d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}
	for (e = 'A'; e <= 'Z'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}

