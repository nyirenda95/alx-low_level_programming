#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_s *head)
{
	listint_s *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
