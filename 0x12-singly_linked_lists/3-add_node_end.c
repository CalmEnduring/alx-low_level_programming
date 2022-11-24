#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to a pointer to a list
  * @str: new element
  *
  * Return: address of new element, NULL of failure
  */
list_t *add_node_end(list_t **head, const char *str)
{
	/* nn == pointer to new node, cn == pointer to current node */
	list_t *nn, *cn;
	size_t ln; /* length of string(str) argument */
	/* allocate space for new node */
	nn = malloc(sizeof(list_t));
	if (nn == NULL) /* space allocation failure */
		return (NULL);
	/* duplicate string argument and assign to str in nn struct */
	nn->str = strdup(str);
	/* deteremine size of said string */
	for (ln = 0; str[ln]; ln++)
		;
	nn->len = ln; /* length of string */
	nn->next = NULL; /* last list node must be NULL terminated */
	/* current node now points to a pointer that points to base struct */
	cn = *head;

	if (cn == NULL)
	{ /* if we are at the last list */
		*head = nn; /* add new node */
	}
	else /* traverse to last list */
	{
		while (cn->next != NULL)
			cn =  cn->next;
		cn->next = nn; /* add new node */
	}
	/* return address of new element */
	return (*head);
}
