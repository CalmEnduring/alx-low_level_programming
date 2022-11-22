#include "lists.h"
/**
  * print_list - prints all elements of list_t
  * @h: pointer to a linked list
  *
  * Return: number of lists
  */
size_t print_list(const list_t *h)
{
	size_t list_num = 0; /* number of lists */

	while (h != NULL)
	{
		if (h->str == NULL) /* if string is NULL */
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next; /* takes us to the next list to print */
		list_num++; /* counts number of lists accessed */
	}
	return (list_num); /* number of lists returned */
}
