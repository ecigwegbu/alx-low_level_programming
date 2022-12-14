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
	listint_t *move1 = head, *move2 = head;  /* temp pointers */

	if (!head)	/* check for empty list */
		return (NULL);
	while (move2->next)
	{
		move1 = move1->next;
		if (move2->next->next)
		{
			move2 = move2->next->next;
		}
		else
		{
			/* No loop */
			return (NULL);
		}
		if (move1 == move2)
		{
			move1 = head;
			while (move1 != move2)
			{
				move1 = move1->next;
				move2 = move2->next;
			}
			return (move2);
		}
	}
	return (NULL);
}

