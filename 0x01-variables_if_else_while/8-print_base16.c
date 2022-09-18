#include <stdio.h>
/**
  * main - Entry point
  * Description: Prints a hexadecimal string
  * Return: 0 success
  */
int main(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

