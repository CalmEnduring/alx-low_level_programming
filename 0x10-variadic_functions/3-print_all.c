#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
  * print_all - prints specified argument type
  * @format: specifier
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, f;
	char *s;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				f = 0;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				f = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				f = 0;
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				f = 0;
				break;
			default:
				f = 1;
				break;
		}
		if (format[i + 1] != '\0' && f == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}

