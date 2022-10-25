/*****************************************************************************/
#include "lists.h"
/**
 * sum_listint - return the sum of all data elements of the linked list
 *
 * @head: head node pointer
 * Return: the sum of all data elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

