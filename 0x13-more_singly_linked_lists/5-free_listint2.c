#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to a listint_t list which is set to NULL
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp; /**
			   * temporarily stores current node of linked list
			   * before moving to the next node and
			   * freeing the memory of the current node
			   */

	if (head) /* if head is not already NULL */
	{
		while (*head) /* loop through the list */
		{
			temp = *head; /* temps holds head */
			*head = (*head)->next; /* head points to next node */
			free(temp); /* free what temp is pointing to */
		}
	}
	else /* if head is NULL */
	{
		return; /* exit function */
	}

	*head = NULL; /* set head to NULL */
}
