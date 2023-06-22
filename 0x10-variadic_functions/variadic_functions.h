#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pac(char *separator, va_list args);
void pai(char *separator, va_list args);
void paf(char *separator, va_list args);
void pacp(char *separator, va_list args);

/**
 * struct format_types - Struct format_types
 * @identifier: The conversion specifier
 * @f: The function pointer
 */
typedef struct dtypes
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_data;

#endif
