#include "lists.h"
/**
  * sum_listint - returns the sum of all data of a listint_t linked list
  * @head: head node
  *
  * Return: sum of all data
  */
int sum_listint(listint_t *head)
{
	int sum = 0; /* sum of data */

	if (head == NULL) /* if list empty */
	{
		return (0);
	}
	else
	{
		while (head) /* traverse list */
		{
			sum += head->n; /* add up data */
			head = head->next; /* move to next node */
		}
	}
	return (sum); /* return sum of data */
}
