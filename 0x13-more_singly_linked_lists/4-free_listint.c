#include "lists.h"
/**
  * free_listint -  frees a listint_t list
  * @head: head of linked list
  *
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *cn;
	/* traverse linked lists */
	while (head != NULL)
	{
		cn = head->next; /* current node = link to following node */
		free(head); /* free list */
		head = cn; /* head list = current node(head->next) */
	}
}
