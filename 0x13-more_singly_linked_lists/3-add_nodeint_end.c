#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * @n: The integer for the new node to contain.
 *
 *  Return: If the function fails - NULL.
 */
listint_s *add_nodeint_end(listint_s **head, const int n)
{
	listint_s *new, *last;

	new = malloc(sizeof(listint_s));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
