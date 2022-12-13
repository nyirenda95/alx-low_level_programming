#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *
 * @head: A pointer to the address of the
 *
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 */
listint_s *add_nodeint(listint_s **head, const int n)
{
	listint_s *new;

	new = malloc(sizeof(listint_s));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
