#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of listint_t list.
 *
 * Description: Sets head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *reals;

	if (head == NULL)
		return;

	while (*head)
	{
		reals = (*head)->next;
		free(*head);
		*head = reals;
	}

	head = NULL;
}
