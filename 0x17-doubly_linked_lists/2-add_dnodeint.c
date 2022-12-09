#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list
 * @head: address of pointer to the head node
 * @n: new node data int
 * Return: pointer to the new node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* NULL checks */
	if (head == NULL)
		return (NULL);

	/* malloc new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* fill in the data */
	new->n = n;

	/* set the 'prev' pointer */
	new->prev = NULL;

	/* attach to old head or NULL terminate*/
	if ((*head) != NULL)
	{
		new->next = (*head);
		(*head)->prev = new;
	}
	else
	{
		new->next = NULL;
	}

	/* redirect the head pointer */
	(*head) = new;

	return (new);
}
