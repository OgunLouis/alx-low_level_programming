#include "lists.h"

/**
 * get_nodeint_at_index - Locates a gives listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 * Return: If the node does not exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes;

	for (nodes = 0; nodes < index; nodes++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

