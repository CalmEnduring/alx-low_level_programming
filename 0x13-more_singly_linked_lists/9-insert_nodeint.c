#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t linked list
 * @idx: index to insert node
 * @n: data to insert
 *
 * Return: address of new node, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *i; /* newnode and iterator respecitviely */
	unsigned int idx_count = 1;

	if (*head) /* if head is not NULL */
	{	/* allocate space for new node */
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL) /* malloc failure */
			return (NULL);

		newnode->n = n; /* assign data to new node data */
		if (idx > 0) /* if index is greater than 0 */
		{
			i = *head; /* iterator points to head */
			while (i) /* iterate through list until NULL */
			{
				if (idx_count == idx) /* index found */
				{
					/* newnode next points to iterator next */
					newnode->next = i->next;
					/* iterator next points to newnode */
					i->next = newnode;
					/* return address of new node */
					return (newnode);
				}
				i = i->next; /* move to next next node */
				idx_count++; /* increment index count */
			}
			if (idx > idx_count) /* index not found */
				return (NULL);
		}
		else /* if index is 0 or less, insert new node at head */
		{
			newnode->next = *head; /*new node next points to head */
			*head = newnode; /* head points to new node */
		}
		return (newnode); /* return address of new node */
	}
	return (NULL); /* function failure, head is NULL */
}
