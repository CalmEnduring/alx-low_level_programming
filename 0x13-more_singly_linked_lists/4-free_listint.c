#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head node of listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp; /** temporarily stores current node of linked list
			   * before moving to the next node and
			   * freeing the memory of the current node
			   */

	while (head) /* loop through list until end (NULL) */
	{
		temp = head; /* temp points to head, holds head as reference */
		head = head->next; /* head points to the next node */
		free(temp); /* free what temp is pointing */
	}
}
