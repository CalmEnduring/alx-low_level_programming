#include "lists.h"
/**
  * insert_nodeint_at_index - insert a new node at a given position
  * @head: head node
  * @idx: index
  * @n: node data
  *
  * Return: address of new node, or NULL on failure
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;/* current used to traverse list */
	listint_t *newnode;
	unsigned int i = 1; /* iterator */

	if (*head != NULL) /* if head not EMPTY */
	{
		newnode = malloc(sizeof(listint_t)); /* allocate space for newnode */
		if (newnode == NULL) /* malloc failure */
			return (NULL);

		newnode->n = n; /* initialize newnode data */
		if (idx > 0) /* if index is not at the begining */
		{
			current = *head; /* current points to haed node */
			while (current) /* travere the list */
			{
				if (i == idx) /* index found */
				{
					/* add newnode */
					newnode->next = current->next;
					current->next = newnode;
					return (newnode); /* return newnode */
				}
				current = current->next; /* move to next node */
				i++; /* increment */
			}
			if (idx > i) /* index not found */
				return (NULL);
		}
		else /* index at the beginning */
		{
			/* add newnode to the beginning */
			newnode->next = *head;
			*head = newnode;
		}
		return (newnode); /* return newnode */
	}
	return (NULL); /* failure */
}
