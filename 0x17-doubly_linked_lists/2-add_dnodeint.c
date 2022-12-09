#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of dlistint_t list
  * @head: pointert o pointer to linked list
  * @n: data in new list
  *
  * Return: new linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	if (*head)
	{
		temp->next = *head;
		temp->prev = (*head)->prev;
		(*head)->prev = temp;
		*head = temp;
		return (*head);
	}

	temp->next = *head;
	temp->prev = NULL;
	*head = temp;

	return (*head);
}
