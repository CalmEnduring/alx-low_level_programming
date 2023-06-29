#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node
 * @str: node data
 *
 * Return: address of new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node; /* node to add at the end of list */
	list_t *temp; /* used to traverse list */

	if (str != NULL)
	{
		end_node = malloc(sizeof(list_t)); /* assign space for end_node */
		if (end_node == NULL) /* malloc failure */
			return (NULL);

		/* assign empty storage with node data for end_node */
		end_node->str = strdup(str);
		end_node->len = strlen(str);
		end_node->next = NULL;

		if (*head == NULL) /* empty list */
		{
			*head = end_node; /* end node is only element */
			return (*head);
		}
		else
		{
			temp = *head; /* temp points to head node */
			while (temp->next) /* traverse through list */
				temp = temp->next; /* next node */

			temp->next = end_node; /* temp now points to the end node */
			return (temp);
		}
	}
	return (NULL); /* failure */
}
