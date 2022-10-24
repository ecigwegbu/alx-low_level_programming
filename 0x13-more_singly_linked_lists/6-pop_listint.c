/*****************************************************************************/
#include "lists.h"
/* #include "free_nodeint.c" */

/**
 * pop_listint - pop 1st node in a singly linked list
 *
 * @head: address of pointer to the first node
 */
int pop_listint(listint_t **head)
{
	int n0;  /* will hold the n value of first node */

	listint_t *temp;

	if (!head)
		return (0);
	else if (*head == NULL)
		return (0);

	temp = *head;
	n0 = (*head)->n;

	if ((*head)->next)	/* check for last node */
		*head = (*head)->next;

	free_nodeint(temp);

	return (n0);
}

