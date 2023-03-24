#include "variadic_functions.h"
/**
  * print_all - Prints anything
  * @format: The conversion specifier to print
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list ap; /* declare variadic argument list */
	fmt form[] = {
		{ "c", printchar },
		{ "i", printint },
		{ "f", printfloat },
		{ "s", printstring }
	}; /* structures of format types */
	unsigned int i = 0; /* iterator */
	unsigned int j = 0; /* iterator */
	char *sep = ""; /* separator */

	va_start(ap, format); /* initialize argument list */

	while (format && format[i]) /* loop through argument list */
	{
		j = 0; /* reset j to 0 after checking specifiers */
		while (j < 4) /* loop through data specifier structures */
		{
			/* match format with corresponding structure */
			if (format[i] == *form[j].id)
			{
				form[j].f(sep, ap); /* call corresponding structure */
				sep = ", "; /* assign comma as separator */
			}
			j++; /* move to next position in struct list */
		}
		i++; /* move to next argument */
	}
	va_end(ap); /* end variadic function call */
	printf("\n"); /* newline */
}

/**
  * printchar - Prints a character of char type
  * @separator: The separator of the character
  * @ap: A list of variadic arguments
  *
  * Return: void
  */
void printchar(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
  * printint - Prints a character of integer type
  * @separator: The separator of the character
  * @ap: A list of variadic arguments
  *
  * Return: void
  */
void printint(char *separator, va_list ap)
{
	printf("%s%i", separator, va_arg(ap, int));
}

/**
  * printfloat - Prints a character of float type
  * @separator: The separator of the character
  * @ap: A list of variadic arguments
  *
  * Return: void
  */
void printfloat(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
  * printstring - Prints the content of pointer to char type
  * @separator: The separator of the character
  * @ap: A list of variadic arguments
  *
  * Return: void
  */
void printstring(char *separator, va_list ap)
{
	char *arg = va_arg(ap, char *);

	if (arg == NULL) /* if string argument empty */
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
