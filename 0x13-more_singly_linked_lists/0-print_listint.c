#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_s list.
 * @h: A pointer to the head of the list_s list.
 *
 * Return: The number of nodes in the list_s list.
 */
size_s print_listint(const listint_s *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;

	}

	return (nodes);
}
