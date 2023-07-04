#include "lists.h"
/**
 * reverse_listint - reverse a listinit_t linked list
 * @head: head node of listint_t list
 *
 * Return: pointer to reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	/* next and prev pointers */
	listint_t *prev = NULL, *next = NULL;

	if (head) /* if head not NULL */
	{
		while (*head) /* iterate through list until NULL */
		{
			next = *head; /* next points to head */
			*head = (*head)->next; /* head points to next node */
			next->next = prev; /* next's next node points to previous pointer */
			prev = next; /* previous points to next pointer */
		}

		*head = prev; /* head points to previous pointer */
		return (*head); /* return pointer to node of reversed list */
	}
	return (NULL); /* failure */
}
