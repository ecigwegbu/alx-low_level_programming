/*****************************************************************************/
#include "lists.h"
#include "free_nodeint.c"

/**
 * pop_listint - pop 1st node in a singly linked list
 *
 * @head: address of pointer to the first node
 */
int pop_listint2(listint_t **head);
{

	listint_t *temp;

	if (!head)
		return;
	else if (*head == NULL)
		return;

	temp = *head;

	while ((*head)->next)
	{
		temp = temp->next;
		free_nodeint(*head);
		*head = temp;
	}
	free_nodeint(*head);
}

