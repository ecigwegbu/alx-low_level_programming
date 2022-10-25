/*****************************************************************************/
#include "lists.h"

/**
 * pop_listint - pop 1st *head in a singly linked list
 *
 * @head: address of pointer to the first *head
 * Return: the value of the first *head
 */
int pop_listint(listint_t **head)
{
	int n0;  /* will hold the n value of first *head */
	listint_t *tmp;

	if (!head)
		return (0);
	if (!(*head))
		return (0);

	tmp = *head;
	n0 = (*head)->n;

	if ((*head)->next)	/* check for last *head */
	{
		*head = (*head)->next;
	}
	else
	{
		*head = NULL;
	}
		free(tmp);
		tmp = NULL;

	return (n0);
}

