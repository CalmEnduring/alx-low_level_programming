#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp; /* used to hold head node and traverse list */

	while (head) /* traverse through list until NULL */
	{
		temp = head; /* temp holds head node */
		head = head->next; /* head node now points to the next node */
		free(temp->str); /* free data held by temp */
		free(temp); /* free temp list_t */
	}
	free(head); /* free head list_t */
}
