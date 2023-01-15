#include "hash_tables.h"
/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table to add/update to
  * @key: key value
  * @value: value associated with the key
  *
  * Return: 1 on success, otherwise 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *item = NULL, *nnode = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);
	/* retrieve key index */
	index = key_index((unsigned char *) key, ht->size);
	item = ht->array[index];

	if (item && strcmp(key, item->key) == 0)
	{
		free(item->value);
		item->value = strdup(value);
		return (1);
	}

	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
		return (0);

	nnode->key = strdup(key);
	nnode->value = strdup(value);
	nnode->next = ht->array[index];
	ht->array[index] = nnode;
	return (1);
}
