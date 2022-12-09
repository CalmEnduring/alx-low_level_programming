#include "lists.h"
/**
  * sum_dlistint - calculates the sum of all data in dlistint list
  * @head: linked list
  *
  * Return: sum of all linked list data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tp;
	int sum;

	tp = head;
	
	sum = 0;
	while (tp != NULL)
	{
		sum += tp->n;
		tp = tp->next;
	}
	return (sum);
}
