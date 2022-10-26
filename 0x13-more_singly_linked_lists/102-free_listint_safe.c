/*****************************************************************************/
#include "lists.h"
/**
 * free_listint_safe - free a signgly linked list
 *
 * @h: address of pointer to head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;  /* temp pointer */
	size_t size;

	if (!h)	/* check for NULL pointer address */
		return (0);

	if (!(*h))	/* check for empty list */
		return (0);

	/* now let the fireworks begin! (looping) */
	for (size = 0, temp = (*h)->next; (*h)->next != NULL;
			*h = temp, temp = temp->next)
	{
		if ((*h)->next > *h)
		{
			free(*h);	/* frees node */
			size++;
			break;
		}
		else
		{
			free(*h);	/* frees node */
			size++;

		}
	}
	if (!(*h)->next)
	{
		free(*h);
		size++;
	}

	*h = temp = NULL;

	return (size);
}
