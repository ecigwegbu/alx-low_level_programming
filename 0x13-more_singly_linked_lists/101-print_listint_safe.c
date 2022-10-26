/*****************************************************************************/
#include <stdio.h>
#include "lists.h"


size_t printp_listint(const listint_t *h);

/**
 * print_listint_safe - safe(?) version of print list
 *
 * @head: pointer to head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;	/* number of nodes */
	const listint_t *move1 = head, *move2 = head;  /* temp pointers */

	if (!head)	/* check for empty list */
		return (0);
	while (move2->next)
	{
		printf("[%p] %d\n", (void *) move1, move1->n);
		size++;
		move1 = move1->next;
		if (move2->next->next)
		{
			move2 = move2->next->next;
		}
		else
		{
			/* print normally from move 1 to end */
		size +=	printp_listint(move1);
		return (size);
		}
		if (move1 == move2)
		{
			move1 = head;
			while (move1 != move2)
			{
				printf("[%p] %d\n", (void *) move2, move2->n);
				size++;
				move1 = move1->next;
				move2 = move2->next;
			}
			printf("-> [%p] %d\n", (void *) move2, move2->n);
			size++;
			break;
		}
	}
	return (size);
}

/**
 * printp_listint - print a list of linked nodes with their pointers
 *
 * @h: node pointer
 * Return: the number of nodes printed
 */
size_t printp_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		n++;
	}

	return (n);
}

