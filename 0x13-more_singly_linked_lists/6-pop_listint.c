/*****************************************************************************/
#include "lists.h"

/**
 * pop_listint - pop 1st *head in a singly linked list
 *
 * @head: address of pointer to the first node
 * Return: the value of the first node
 */
int pop_listint(listint_t **head)
{
	int n0;  /* will hold the n value of first *head */
	listint_t *tmp;

	if (!head)
		return (0);
	else if (!(*head))
		return (0);

	tmp = *head;
	n0 = (*head)->n;

	if ((*head)->next)	/* check for last *head */
		*head = (*head)->next;

	free_nodeint(tmp);
	tmp = NULL;

	return (n0);
}

