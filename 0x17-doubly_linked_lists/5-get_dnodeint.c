#include "lists.h"
/**
  * get_dnodeint_at_index -  gets node at nth index
  * @head: linked list
  * @index: node index
  *
  * Return: nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tp;
	unsigned int i;

	tp = head;

	i = 0;
	while (tp != NULL)
	{
		if (i == index)
		{
			return (tp);
		}
		tp = tp->next;
		i++;
	}
	return (NULL);
}
