#include "lists.h"

/**
 * free_dlistint- free a doubly linked list
 * @head: pointer to the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	/* NULL checks */
	if (head == NULL)
		return;

	/* scan nodes and free as necessary */
	if (head == NULL)	/* empty list case */
		return;

	if (head->next == NULL)		/* single node case */
	{
		free(head);
	}
	else
	{
		ptr = (head)->next;
		while (ptr->next)
		{
			free(head);
			(head) = ptr;
			ptr = ptr->next;
		}
		free(head);
		free(ptr);
	}
}
