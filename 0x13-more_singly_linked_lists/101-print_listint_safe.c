/*****************************************************************************/
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - safe(?) version of print list
 *
 * @head: pointer to head
 * Return: the number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev, *curr;
	size_t i = 0;

	if (!head)	/* check for NULL pointer, ie empty list */
		exit(98);

	/* now let the fireworks begin! (looping) */
	for (i = 0, curr = head, prev = curr; curr != NULL;
			prev = curr, curr = curr->next)
	{

		if (curr > prev)
		{
			printf("-> [%p] %d\n", (void *) curr, curr->n);
			break;
		}
		else
		{
			printf("[%p] %d\n", (void *) curr, curr->n);
			i++;
		}
	}

	curr = prev = NULL;

	return (i);
}
