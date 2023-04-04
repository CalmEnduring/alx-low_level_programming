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
	listint_t *current = *head; /* current used to traverse list */
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int i = 0; /* iterator */

	if (newnode == NULL) /* malloc failure */
		return (NULL);

	newnode->n = n; /* initialize newnode data */
	newnode->next = NULL; /* initialize next pointer to NULL */

	if (*head != NULL) /* if head not EMPTY */
	{
		for (; i < idx - 1; i++) /* travere the list */
		{
			current = current->next;
		}

		if (current == NULL)
		{
			return (NULL);
		}
		else
		{
			/* add newnode */
			newnode->next = current->next;
			current->next = newnode;
		}

		return (newnode); /* return newnode */
	}
	return (NULL); /* failure */

}
