#include "lists.h"
/**
  * add_nodeint - adds a new node
  * @head: head node of linked list
  * @n: new node's element value
  *
  * Return: address of new elements
  * else NULL on failure
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL) /* malloc failure */
		return (NULL);

	if (head != NULL)
	{
		newnode->n = n; /* newnode element set to input n */
		newnode->next = *head; /* node points back to head */
		*head = newnode; /* add node at the beginning */

		return (newnode); /* return address of newnode */
	}
	return (NULL); /* failure */
}
