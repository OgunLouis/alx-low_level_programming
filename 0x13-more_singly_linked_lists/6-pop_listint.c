#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of
 * Return: If the linked list is empty -0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int rets;

	if (*head == NULL)
		return (0);

	tmp = *head;
	rets = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (rets);
}
