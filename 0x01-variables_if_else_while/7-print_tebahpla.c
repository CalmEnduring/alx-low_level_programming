#include <stdio.h>
/**
  * main - Entry point
  * Description: Prints alphabet in reverse lower case
  * Return: 0 success
  */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
