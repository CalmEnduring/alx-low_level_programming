#include "lists.h"
/**
  * free_dlistint - frees a dlistint_t linked list
  * @head: linked list
  *
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp = head, *next = NULL;

	while (tp != NULL)
	{
		next =  tp->next;
		free(tp);
		tp = next;
	}
}
