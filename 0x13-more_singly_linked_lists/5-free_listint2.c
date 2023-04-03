#include "lists.h"
/**
  * free_listint - frees a listint_t list
  * @head: pointer to head node
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp; /* pointer to store an address temporarily */

	if (*head)
	{
		while (*head) /* traverse through list */
		{
			temp = *head; /* temp holds address of head */
			*head = (*head)->next; /* move to next node */
			free(temp); /* free current node */
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}