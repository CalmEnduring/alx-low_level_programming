#include "lists.h"
/**
  * add_nodeint - adds a new node at beginning of a listint_t list
  * @head: pointer to a pointer to list
  * @n: new element
  *
  * Return: address of new element, NULL on failure
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* new node struct variable */

	/* allocate space for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL) /* space allocation failure */
		return (NULL);

	new_node->n = n;
	new_node->next = *head; /* link new node to initial struct */
	*head = new_node; /* link initial struct to new node */
	/* return address of new node */
	return (*head);
}
