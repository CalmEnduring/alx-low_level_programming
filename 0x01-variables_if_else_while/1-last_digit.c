#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Print the last digit stored in n
 * Return: 0
 */
int main(void)
{
	int n; lasted;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdg = n % 10;

	if (lstdg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdg);
	}
	else if (lstdg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdg);
	}
	else if (lstdg < 6 && lstdg != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdg);
	}

	return (0);
}
