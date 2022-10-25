#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	int n;

	head = NULL;
	print_listint(head);
	n = pop_listint(&head);
	printf("-NULL %d\n", n);
	return (0);
}
