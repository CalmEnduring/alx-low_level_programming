#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: head node
  *
  * Return: head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *nh;
	int n = 0;

	if (*head)
	{
		nh = (*head)->next; /* points to what head->next points to */
		n = (*head)->n; /* the new value of n */
		free(*head); /* free head */
		*head = nh;
	}
	return (n); /* return head node's data */
}
