#include <stdio.h>
/**
  * main - Entry point
  *Description: Prints all single digit num of base 10 from 0
  *Return: 0 success
  */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
