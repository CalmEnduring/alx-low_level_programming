#include "lists.h"
/**
  * add_nodeint_end - adds a node at the end of list
  * @head: head node
  * @n: node element value
  *
  * Return: address of new element or NULL on failure
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head; /* current to be used to traverse */
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL) /* malloc failure */
		return (NULL);

	newnode->n = n; /* initialize newnode element */
	newnode->next = NULL; /* set next pointer to NULL */

	if (*head != NULL) /* if head not EMPTY */
	{
		while (current->next) /* traverse the list */
		{
			current = current->next;
		}
		newnode->next = current->next;
		current->next = newnode; /* add newnode at the end */
	}
	else /* if head empty */
	{
		*head = newnode;/* add newnode node */
	}
	return (newnode); /* return newnode */
}
