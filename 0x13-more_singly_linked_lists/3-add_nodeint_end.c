#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head node
 * @n: end node data
 *
 * Return: address of newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode; /* new node */
	listint_t *temp; /* temp node for traversal of list */

	/* make sure head is not empty before executing logic */
	if (head) /* is not NULL */
	{
		newnode = malloc(sizeof(listint_t)); /* allocate space for new node */
		if (newnode == NULL) /* malloc failure */
			return (NULL);

		newnode->n = n; /* assign end node data to new node */
		newnode->next = NULL; /* terminate node pointer */

		/* account for empty list, adds the end node in the beginning */
		if (*head == NULL) /* if list is empty */
		{
			*head = newnode; /* add new node to list */
			return (*head); /* return address of newnode */
		}
		else /* account for non-empty list, add node at the end of list */
		{
			temp = *head; /* temp points to head node, essentially a copy of head  */
			while (temp->next) /* traverse through list */
				temp = temp->next; /* temp points to next node */

			temp->next = newnode; /* temp node points to new node at end */
			return (temp); /* return address of new node */
		}
	}
	return (NULL); /* function failure */
}
