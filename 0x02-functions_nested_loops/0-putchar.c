#include "main.h"
/**
 * main - Entry point
 *
 * _putchar - prints to stdout
 *
 * Return: 1 if true, 0 if false
 */
int main(void)
{
	char *chara = "_putchar";

	while (*chara)
	{
		putchar(*chara);
		chara++;
	}
	putchar('\n');

	return (0);
}
