#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of dlistint_t list
  * @head: pointert o pointer to linked list
  * @n: data in new list
  *
  * Return: new linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *tp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	if (*head)
	{
		tp = *head;
		while (tp->next != NULL)
			tp = tp->next;

		temp->next = NULL;
		temp->prev = tp;
		tp->next = temp;
		return (temp);
	}

	temp->next = *head;
	temp->prev = NULL;
	*head = temp;

	return (*head);
}
