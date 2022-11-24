#include "lists.h"
/**
  * print_listint - prints all elements of a listint_t list
  * @h: head of linked list
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0; /* number of nodes */
	/* traverse through all linked lists */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* print data */
		h = h->next; /* proceed to consequent linked list */
		num_of_nodes++; /* counting nodes */
	}
	return (num_of_nodes);
}
