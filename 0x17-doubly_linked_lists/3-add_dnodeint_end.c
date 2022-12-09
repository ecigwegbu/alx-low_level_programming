#include "lists.h"

dlistint_t *get_lastnode(dlistint_t **head);

/**
 * add_dnodeint_end - add a new node at the end of a doubly linked list
 * @head: address of pointer to the head node
 * @n: new node data int
 * Return: pointer to the new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *lastnode;

	/* NULL checks */
	if (head == NULL)
		return (NULL);

	/* malloc new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* fill in the data */
	new->n = n;

	/* set the 'next' pointer */
	new->next = NULL;

	/* attach to old end or point prev to NULL*/
	if ((*head) == NULL)  /* empty list */
	{
		new->prev = NULL;
		/* redirect the head pointer */
		(*head) = new;
	}
	else if ((*head)->next == NULL) /* single node */
	{
		new->prev = (*head);
		(*head)->next = new;
	}
	else
	{
		lastnode = get_lastnode(head);
		new->prev = lastnode;
		lastnode->next = new;
	}

	return (new);
}

/**
 * get_lastnode - get the last node of a doubly linked list
 * @head: address of pointer to the head node
 * Return: pointer to the last node
 */
dlistint_t *get_lastnode(dlistint_t **head)
{
	dlistint_t *ptr = (*head);

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	return (ptr);
}
