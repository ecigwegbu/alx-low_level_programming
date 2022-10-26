/*****************************************************************************/
#include "lists.h"
/**
 * find_listint_loop - find the start of a loop in a linked list
 *
 * @head: pointer to head
 * Return: the address of the node where the loop starts or NULL if none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *move1, *move2;  /* temp pointers */

	if (!head)	/* check for empty list */
		return (NULL);

	/* now let the fireworks begin! (looping) */
	for (move1 = move2 = head; move1 && move2 && move2->next;
			move1 = move1->next, move2 = move2->next->next)
	{
		if (move1 == move2)
			return (move1);
	}
	move1 = move2 = NULL;

	return (NULL);
}
