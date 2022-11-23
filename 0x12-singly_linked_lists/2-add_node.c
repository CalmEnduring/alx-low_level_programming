#include "lists.h"
/**
  * add_node - adds a new node at beginning of a list_t list
  * @head: pointer to a pointer to a list
  * @str: new element
  *
  * Return: address of new lement, NULL on Failure
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* new node struct variable */
	size_t ln; /* length of string variable */
	/* allocate space for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* space allocation failure */
		return (NULL);
	/* duplicaate string argument and assign to str in struct */
	new_node->str = strdup(str);
	/* determine size of string */
	for (ln = 0; str[ln]; ln++)
		;
	new_node->len = ln; /* length of string */
	new_node->next = *head; /* link new node to initial struct */
	*head = new_node; /* link initial struct to new node */
	/* return address of new node */
	return (*head);
}
