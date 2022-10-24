/*****************************************************************************/
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the beginning of a simply linked list
 *
 * @head: address of the first node pointer
 * @n: the int value of the new node
 * Return: the address of the new element added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = (NULL);
	listint_t *temp = NULL;
	/* first check head is not NULL */
	if (!head)   /*check if null pointer passed */
		return (NULL);
	lastNode = malloc(sizeof(listint_t));
	if (!lastNode)   /* check for malloc failure */
		return (NULL);
	lastNode->n = n;
	lastNode->next = NULL;
	/* check if list is empty */
	if (*head == NULL)   /* check if list is empty */
	{
		*head = lastNode;
		return (*head);
	}
	/* find last node - use temp node pointer */
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	/* let last node point to lastNode */
	temp->next = lastNode;

	return (*head);
}

