/*****************************************************************************/
#include "lists.h"
#include "4-freeNode.c"

/**
 * free_list - adds a node at the beginning of a simply linked list
 *
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{

	list_t *temp;

	if (!head)
		return;

	temp = head;

	while (head->next)
	{
		temp = temp->next;
		freeNode(head);
		head = temp;
	}
	freeNode(head);
}

