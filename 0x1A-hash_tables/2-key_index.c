#include "hash_tables.h"
/**
  * key_index - this function returns the index of a key
  * @key: the key of the hash table
  * @size: size of the hash table
  *
  * Return: index of a key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
