#include "lists.h"
/**
  * delete_nodeint_at_index - deletes node at index of listint_t linked list
  * @head: head node
  * @index: location of node to delete
  *
  * Return: 1 on succe, -1 on failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *delete;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current && i < index - 1)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	delete = current->next;
	current->next = current->next->next;

	free(delete);

	return (1);
}
