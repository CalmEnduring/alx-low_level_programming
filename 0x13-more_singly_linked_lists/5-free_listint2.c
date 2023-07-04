#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to a listint_t list which is set to NULL
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	*head = NULL;
}
