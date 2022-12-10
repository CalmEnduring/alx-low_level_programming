#include "lists.h"
/**
  * delete_dnodeint_at_index -  deletes ndode at nth index
  * of dlistint_t linked list
  * @head: head of linked list
  * @index: nth node to delete
  *
  * Return: 1 on success, -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hone;
	dlistint_t *htwo;
	unsigned int i;

	hone = *head;
	/* traversing the list backwards */
	if (hone != NULL)
		while (hone->prev != NULL)
			hone = hone->prev;

	i = 0;
	while (hone != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = hone->next;
					if (*head != NULL)
						(*head)->prev = NULL;
			}
			else
			{
				htwo->next = hone->next;
				if (hone->next != NULL)
					hone->next->prev = htwo;
			}
			free(hone);
			return (1);
		}
		htwo = hone;
		hone = hone->next;
		i++;
	}
	return (-1);
}
