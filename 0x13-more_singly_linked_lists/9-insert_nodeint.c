#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * @idx: The index of the listint_t list where the new
 *
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 */

listint_s *insert_nodeint_at_index(listint_s **head, unsigned int idx, int n)
{
	listint_s *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_s));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);

	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
