#include <stdio.h>
/**
  * main - Entry point
  * Description: Prints single digit numbers of base 10 start @ 0
  * without the type char
  * Return: 0 success
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
