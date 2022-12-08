#include "lists.h"
/**
  * print_dlistint - prints elements of dlistint_t
  * @h: pointer to dlisint_t list
  *
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
