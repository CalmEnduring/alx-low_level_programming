#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: listint_t list
 * @index: index of node to retrieve
 *
 * Return: indexed node, otherwise NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0; /* iterator */

	if (head)
	{
		while (head)
		{
			if (i == index)
			{
				return (head);
			}
			else
			{
				head = head->next;
				i++;
			}
		}
	}
	return (NULL);
}

