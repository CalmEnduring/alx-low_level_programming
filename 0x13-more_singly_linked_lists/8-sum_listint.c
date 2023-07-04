#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of listint_t linked list
 * @head: listint linked list
 *
 * Return: sum of all data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0; /* holds the sum of all data */

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
