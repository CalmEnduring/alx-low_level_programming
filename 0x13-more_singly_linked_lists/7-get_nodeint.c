#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: head node
  * @index: index to retrieve
  *
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0; /* iterator */

	while (head) /* traverse list */
	{
		if (i == index) /* index found */
		{
			return (head); /* return node */
		}
		else /* move to next node */
		{
			head = head->next;
			i++; /* increment count */
		}
	}
	return (NULL); /* index not found */
}
