#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a list_t list
  * @head: pointer to a pointer to list
  * @n: new element
  *
  * Return: address of new element, NULL on failure
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn, *cn;
	/* allocate space for new node */
	nn = malloc(sizeof(listint_t));
	if (nn == NULL) /* space allocation failure */
		return (NULL);

	nn->n =  n;
	nn->next = NULL; /* last list node must be NULL */
	/* current node now points to a pointer that points to initial struct */
	cn = *head;
	if (cn == NULL)
	{/* if we are the end of the current list */
		*head = nn; /* add new node */
	}
	else /* traverse to the end of the current list */
	{
		while (cn->next != NULL)
			cn = cn->next;
		cn->next = nn; /* add new node */
	}
	/* return address of new element */
	return (*head);
}
