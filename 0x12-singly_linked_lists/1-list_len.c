#include "lists.h"
/**
  * list_len - calculates the number of elements in linked list_t list
  * @h: pointer to a singly linked list
  *
  * Return: number of elements in a linked list_t list
  */
size_t list_len(const list_t *h)
{
	size_t num_of_el = 0;

	for (; h != NULL; h = h->next)
	{
		num_of_el++;
	}
	return (num_of_el);
}
