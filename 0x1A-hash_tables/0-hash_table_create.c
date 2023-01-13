#include "hash_tables.h"
/**
  * hash_table_create - creates a hash table
  * @size: size of the hash table
  *
  * Return: a pointer the new hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = NULL;
	hash_node_t **arr = NULL;

	/* allocate space for hash table */
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	/* allocate space for array pointer */
	arr = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);
	/* initialize array with NULL */
	for (; i < size; ++i)
		arr[i] = NULL;

	table->size = size; /* points to size pointer in new table */
	table->array = arr; /* points to array pointer in new table */

	return (table); /* returns pointer to new table */
}
