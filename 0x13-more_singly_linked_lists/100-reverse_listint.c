/*****************************************************************************/
#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 *
 * @head: address of pointer to head
 * Return: pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t1, *t2;  /* temp pointers t1, t2 */

	if (!head)	/* check for NULL pointer address */
		return (NULL);

	if (!(*head))	/* check for null list */
		return (NULL);

	if (!(*head)->next)	/* in case of one element only */
		return (NULL);

	/* now let the fireworks begin! (looping) */
	for (t1 = NULL, t2 = (*head)->next; t2 != NULL;
			t1 = *head, *head = t2, t2 = t2->next)
	{
		(*head)->next = t1;	/* reverse node */
	};
	(*head)->next = t1;
	t1 = t2 = NULL;

	return (*head);
}
