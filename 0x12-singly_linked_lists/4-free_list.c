#include "lists.h"
/**
  * free_list - frees allocated space for a list_t list
  * @head: head of linked list
  *
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *cn; /* pointer to current node */
	/* traverse through all the linked lists */
	while ((cn = head) != NULL)
	{
		head = head->next; /* proceed to next linked list */
		free(cn->str); /* free string */
		free(cn); /* free current list */
	}
}
