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

	if (head) /* if head is not NULL */
	{
		while (head) /* iterate through list until NULL */
		{
			sum += head->n; /* add data to sum */
			head = head->next; /* head points to next node */
		}
		return (sum); /* return sum of all data in linked list */
	}
	return (0); /* list is empty, return 0 */
}
