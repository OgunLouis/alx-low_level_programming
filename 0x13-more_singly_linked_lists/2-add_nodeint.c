#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node to begining
 * @head: A pointer to the address of head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
