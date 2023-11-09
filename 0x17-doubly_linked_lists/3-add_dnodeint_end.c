#include "lists.h"

/**
 * add_dnodeint_end - adds new node to the end of the list
 * @head: head node
 *
 * Return: address of new node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	new->n = n;
	new->next = NULL;
	if (!head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = new;
		new->prev = node;
	}
	return (new);
}
