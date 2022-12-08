#include "lists.h"
/**
  * dlistint_len - returns number of elements in a linked dlistint_t list
  * @h: pointer to dlisint_t list
  *
  * Return: number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
