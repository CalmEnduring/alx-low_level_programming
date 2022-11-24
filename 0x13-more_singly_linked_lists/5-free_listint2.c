#include "lists.h"
/**
  * free_listint2 - frees a listint_t list and sets head to NULL
  * @head: a pointer to a pointer to linked liss
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *cn;

	if (head == NULL)
		return;
	/* traverse linked lists */
	while (*head != NULL) /* head is dereferenced */
	{
		cn = (*head)->next; /* curr node = dereferenced node */
		free(*head); /* free list */
		*head = cn; /* head list = curr node (*head->next) */
	}
}
