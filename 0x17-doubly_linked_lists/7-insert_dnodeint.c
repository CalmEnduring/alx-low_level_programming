#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a node at nth index
  * in dlistint_t list
  * @h: head of linked list
  * @idx: index of list
  * @n: data to insert
  *
  * Return: new linked list
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, dlistint_t *head;
	unsigned int i;

	nn == NULL;
	if (idx == 0)
		nn = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					nn = add_dnodeint_end(h, n);
				else
				{
					nn = malloc(sizeof(dlistint_t));
					if (nn != NULL)
					{
						nn->n = n;
						nn->next = head->next;
						new->prev = head;
						head->next->prev = nn;
						head->next = nn;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (nn);
}
