#include "hash_tables.h"
/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: table to retrieve from
  * @key: key's value to retrieve
  *
  * Return: the value associated witht he element or,
  *         NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *item = NULL;

	/* if the arguments given are empty return NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* get index of key */
	index = key_index((unsigned char *) key, ht->size);
	item = ht->array[index];

	/* if item is empty return NULL */
	if (item == NULL)
		return (NULL);

	/* while the keys doesn't match, continue to the next key */
	while (strcmp(key, item->key) != 0)
		item = item->next;

	return (item->value);
}
