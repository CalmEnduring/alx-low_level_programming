#include "main.h"
#include <stdio.h>
/**
  * main - checks the code
  *
  * Return: Awlways 0
  */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
