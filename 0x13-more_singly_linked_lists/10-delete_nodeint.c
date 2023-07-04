#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: listint_t linked list
 * @index: given index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp, *h;
	unsigned int i = 1;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
