#include "hash_tables.h"
/**
  * hash_table_print - prints a hash table
  * @ht: hash table to print
  *
  * Return: nothing
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	short com = 0;
	hash_node_t *item = NULL;

	/* if the table is empty, return nothing */
	if (ht == NULL)
		return;

	printf("{"); /* open curly brace for printing of table */

	/* iterate through the hash table */
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i]; /* node pointer now points to array index of table */

		while (item) /* while true */
		{
			/* seperate the key:value with commas */
			if (com == 1)
				printf(", ");

			com = 1;
			printf("'%s': '%s'", item->key, item->value);

			/* move to next key/value pair */
			item = item->next;
		}
	}
	printf("}\n"); /* close curly brace for print of table */
}
