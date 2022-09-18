#include <stdio.h>
/**
  * main - Entry point
  * Description: Prints the alphabet except letters 'q' and 'e'
  * Return: 0 success
  */
int main(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == 'e' || j == 'q')
		{
			continue;
		}
		putchar(j);
	}
	putchar('\n');
	return (0);
}

