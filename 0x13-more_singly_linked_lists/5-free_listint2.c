/*****************************************************************************/
#include "lists.h"
#include "free_nodeint.c"

/**
 * free_listint2 - frees a singly linked list
 * and sets the head to NULL
 *
 * @head: address of pointer to the first node
 */
void free_listint2(listint_t **head)
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
	temp = NULL;
	free_nodeint(*head);

	*head = NULL;
}

