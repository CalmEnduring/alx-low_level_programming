#include "lists.h"
/**
  * listint_len - counts the number of elements in a listint_t list
  * @h: head of linked list
  *
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t num_of_el = 0;

	for (; h != NULL; h = h->next)
	{
		num_of_el++;
	}
	return (num_of_el);
}
