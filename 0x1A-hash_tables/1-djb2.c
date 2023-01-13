#include "hash_tables.h"
/**
  * hash_djb2 - hash function using djb2 algorithm
  * @str: value to which the function
  *
  * Return: number representing the given string
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 53281;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c*/
	}
	return (hash);
}
