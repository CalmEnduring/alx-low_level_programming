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

	if (head) /* if head is not NULL */
	{
		while (head) /* iterate through list until NULL */
		{
			if (i == index) /* node found */
			{
				return (head); /* returned found node */
			}
			else /* node not found, continue loop */
			{
				head = head->next; /* head points to next node */
				i++; /* increment index count */
			}
		}
	}
	return (NULL); /* node doesnt exist, return NULL */
}

