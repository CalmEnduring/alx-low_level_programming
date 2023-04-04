#include "lists.h"
/**
  * reverse_listint - reverse a listint_t linked lit
  * @head: head node
  *
  * Return: pointer to the first node of the revered list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (head) /* if head is not empty */
	{
		while (*head) /* while head is not empty */
		{
			next = *head; /* store head in next */
			*head = (*head)->next; /* move to next node */
			next->next = prev; /* next linked to prev */
			prev = next; /* prev pointing to next */
		}
		*head = prev; /* head points to first node of list */
		return (*head); /* return pointer to first node of list */
	}
	return (NULL); /* failure */
}
