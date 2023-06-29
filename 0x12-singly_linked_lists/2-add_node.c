#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: head node
 * @str: node data of new head node
 *
 * Return: address of new element or NUll on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead; /* pointer to new head node */

	if (head != NULL && str != NULL) /* if head and string arent empty */
	{
		newhead = malloc(sizeof(list_t)); /* allocate space for new head node */
		if (newhead == NULL) /* malloc failure */
			return (NULL);

		newhead->str = strdup(str); /* assign head node date to new head hode */
		newhead->len = strlen(str); /* same as above */
		newhead->next = *head; /* new head node points to old head */

		*head = newhead; /* new head assigned to old head */

		return (newhead); /* return address of new head */
	}
	return (0);
}
