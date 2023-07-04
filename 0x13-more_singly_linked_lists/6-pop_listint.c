#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint linked list
 * @head: head node of listint linked list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int popped_data; /* holds the head node's data */
	listint_t *newh; /* points to the new head */

	if (head) /* if head is not NULL */
	{
		newh = (*head)->next; /* new head points to next node */
		popped_data = (*head)->n; /* assign head data to popped data var */
		free(*head); /* free head */
		*head = newh; /* head now points to new head which points to next node */
	}
	return (popped_data); /* return head node data */
}
