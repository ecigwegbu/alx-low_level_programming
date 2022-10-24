/*****************************************************************************/
#include "lists.h"
#include "free_nodeint.c"

/**
 * free_listint2 - frees a singly linked list
 * and sets the head to NULL
 *
 * @head: pointer to the first node
 */
void free_listint2(listint_t *head)
{

	listint_t *temp;

	if (!head)
		return;

	temp = head;

	while (head->next)
	{
		temp = temp->next;
		free_nodeint(head);
		head = temp;
	}
	free_nodeint(head);
}

