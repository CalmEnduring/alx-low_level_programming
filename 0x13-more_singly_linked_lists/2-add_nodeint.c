#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of listint_t list
 * @head: head node
 * @n: element data
 *
 * Return: address to new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead; /* newhead node */

	if (head != NULL) /* head not empty */
	{
		newhead = malloc(sizeof(listint_t)); /* allocate space for newhead */
		if (newhead == NULL) /* malloc failure */
			return (NULL);

		newhead->n = n; /* assign newhead element data */
		newhead->next = *head; /* newhead points to old head */
		*head = newhead; /* newhead assigned to old head */

		return (newhead); /* return address of newhead */
	}
	return (0);
}
